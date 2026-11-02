def guard_start(file, name):
    file.write(f"#ifndef SGD_{name}\n")
    file.write(f"#define SGD_{name}\n")


def guard_end(file):
    file.write("#endif")

def typedef(file):
    file.write("typedef ")

def enum_start(file):
    file.write(f"enum {{\n")

def enum_end(file, name):
    if name == None:
        file.write(f"}};\n\n")
    else:
        file.write(f"}} {name};\n\n")

def struct_start(file):
    file.write(f"struct {{\n")

def struct_end(file, name):
    file.write(f"}} {name};\n\n")

def include(file, path):
    file.write(f"#include <{path}>\n")

def include_rel(file, path):
    file.write(f"#include \"{path}\"\n")

def include_types(file):
    include(file, "singularity/types.h")

def nl(file):
    file.write("\n")
