def guard_start(file, name):
    file.write(f"#ifndef SGD_{name}\n")
    file.write(f"#define SGD_{name}\n")


def guard_end(file):
    file.write("#endif")
