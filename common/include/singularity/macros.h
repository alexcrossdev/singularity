/*
 * macros.h
 * Macro functions that don't have a dedicated module
 *
 * Copyright (c) 2026 Alex Cross
 */

#ifndef SG_MACROS_H
#define SG_MACROS_H

#define UNUSED(x) ((void)x)

/*
 * This macros have niche use cases
 * The compiler optimizations will do most of this automatically and
 * it is hard to predict if something is going to be more likely over
 * the lifetime of a program.
 * Some use cases are after rigorous benchmarking
 */
#define LIKELY(x)   __builtin_expect(!!(x), 1)
#define UNLIKELY(x) __builtin_expect(!!(x), 0)

#endif
