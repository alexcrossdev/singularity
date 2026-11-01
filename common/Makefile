.DEFAULT_GOAL := all

CC ?= clang
AR ?= ar
ARFLAGS := rcs

BUILD ?= debug
TARGET := libsgcommon.a

ROOT_DIR := ..
BUILD_DIR := $(ROOT_DIR)/build
OBJ_DIR := $(BUILD_DIR)/obj/common
LIB_DIR := $(BUILD_DIR)/lib

INCLUDE_DIR := include
SRC_DIR := src

CPFLAGS += -I$(INCLUDE_DIR)

CFLAGS += -std=c23
CFLAGS += -Wall -Wextra -Wpedantic
CFLAGS += -Werror
CFLAGS += -Wconversion -Wsign-conversion
CFLAGS += -Wshadow -Wstrict-prototypes
CFLAGS += -Wmissing-prototypes
CFLAGS += -Wundef

ifeq ($(BUILD),debug)
	CFLAGS += -O0 -g3 -Wp,-U_FORTIFY_SOURCE
else ifeq ($(BUILD),release)
	CFLAGS += -O3 -DNDEBUG
else ifeq ($(BUILD),relwithdebinfo)
	CFLAGS += -O2 -g
else
	$(error Unsupported build configuration: $(BUILD))
endif

SOURCES := $(shell find src -name "*.c" -type f)
OBJECTS := $(patsubst $(SRC_DIR)/%.c,$(OBJ_DIR)/%.o,$(SOURCES))

DEPS := $(OBJECTS:.o=.d)

LIBRARY := $(LIB_DIR)/$(TARGET)

.PHONY: all clean rebuild

all: $(LIBRARY)

$(LIBRARY): $(OBJECTS) | $(LIB_DIR)
	$(AR) $(ARFLAGS) $@ $^

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c | $(OBJ_DIR)
	@mkdir -p $(dir $@)
	$(CC) $(CPFLAGS) $(CFLAGS) \
		-MMD -MP \
		-c $< -o $@

$(OBJ_DIR):
	mkdir -p $@

$(LIB_DIR):
	mkdir -p $@

clean:
	rm -rf $(OBJ_DIR) $(LIBRARY)

rebuild: clean all

-include $(DEPS)
