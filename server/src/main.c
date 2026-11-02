#include <singularity/base.h>
#include <singularity/log.h>

#include <stdatomic.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "net/server.h"
#include "proto/protocol.h"

#include <getopt.h>
#include <signal.h>
#include <sys/resource.h>
#include <time.h>
#include <unistd.h>

static atomic_int g_stop;

static void on_signal(int sig)
{
    (void)sig;
    atomic_store_explicit(&g_stop, 1, memory_order_relaxed);
}

static void usage(const char *argv0)
{
    fprintf(stderr,
            "usage: %s [options]\n"
            "  -b ADDR   bind address, numeric (default 0.0.0.0, use :: for IPv6)\n"
            "  -p PORT   listen port (default 25565)\n"
            "  -t N      IO threads (default: number of CPUs)\n"
            "  -m N      max players shown in status (default 5000)\n"
            "  -c N      max simultaneous connections (default 20000)\n"
            "  -M TEXT   MOTD\n"
            "  -v        verbose logging\n",
            argv0);
}

/* Each connection is one fd; raise the soft limit to the hard limit. */
static void raise_nofile(void)
{
    struct rlimit rl;
    if (getrlimit(RLIMIT_NOFILE, &rl) == 0 && rl.rlim_cur < rl.rlim_max) {
        rl.rlim_cur = rl.rlim_max;
        setrlimit(RLIMIT_NOFILE, &rl);
    }
}

int main(int argc, char **argv)
{
    long ncpu = sysconf(_SC_NPROCESSORS_ONLN);
    server_config cfg = {
        .bind_addr = "0.0.0.0",
        .port = 25565,
        .io_threads = ncpu > 0 ? (int)ncpu : 1,
        .max_players = 5000,
        .max_conns = 20000,
        .motd = "A C Minecraft server",
    };

    int opt;
    while ((opt = getopt(argc, argv, "b:p:t:m:c:M:vh")) != -1) {
        switch (opt) {
        case 'b': cfg.bind_addr = optarg; break;
        case 'p': cfg.port = (uint16_t)atoi(optarg); break;
        case 't': cfg.io_threads = atoi(optarg); break;
        case 'm': cfg.max_players = (uint32_t)atoi(optarg); break;
        case 'c': cfg.max_conns = (uint32_t)atoi(optarg); break;
        case 'M': cfg.motd = optarg; break;
        case 'v': sg_log_set_level(SG_LOG_LEVEL_DEBUG); break;
        default: usage(argv[0]); return opt == 'h' ? 0 : 2;
        }
    }
    if (cfg.io_threads < 1 || cfg.io_threads > 256) {
        fprintf(stderr, "invalid thread count\n");
        return 2;
    }

    struct sigaction sa = { .sa_handler = on_signal };
    sigemptyset(&sa.sa_mask);
    sigaction(SIGINT, &sa, NULL);
    sigaction(SIGTERM, &sa, NULL);
    signal(SIGPIPE, SIG_IGN);
    raise_nofile();

    server *srv = server_create(&cfg);
    if (!srv)
        return 1;
    if (server_start(srv) < 0) {
        server_destroy(srv);
        return 1;
    }
    const protocol_layer *version = protocol_layer_default();
    SG_LOG_INFO("mcserver for Minecraft %s (protocol %u) listening on %s:%u with %d IO threads",
             version->minecraft_version, version->protocol_version,
             cfg.bind_addr, cfg.port, srv->nio);

    unsigned ticks = 0;
    while (!atomic_load_explicit(&g_stop, memory_order_relaxed)) {
        struct timespec ts = { 0, 100 * 1000 * 1000 };
        nanosleep(&ts, NULL);
        if (++ticks % 100 == 0) { /* every ~10 s */
            server_stats st;
            server_get_stats(srv, &st);
            SG_LOG_INFO("conns=%llu accepted=%llu rx=%lluB tx=%lluB",
                     (unsigned long long)(st.accepted - st.closed),
                     (unsigned long long)st.accepted, (unsigned long long)st.bytes_in,
                     (unsigned long long)st.bytes_out);
        }
    }

    SG_LOG_INFO("shutting down");
    server_stop(srv);
    server_destroy(srv);
    return 0;
}
