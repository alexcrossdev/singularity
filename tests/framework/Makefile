.DEFAULT_GOAL := all

CC := clang

AR      ?= ar
ARFLAGS := rcs

BUILD ?= debug

ROOT_DIR  := ../..
BUILD_DIR := $(ROOT_DIR)/build
OBJ_DIR   := $(BUILD_DIR)/obj/tests/framework/$(BUILD)
LIB_DIR   := $(BUILD_DIR)/lib

TARGET  := libsgtest.a
LIBRARY := $(LIB_DIR)/$(TARGET)

INCLUDE_DIR := include
SRC_DIR     := src

CPPFLAGS += -I$(INCLUDE_DIR)
CPPFLAGS += -I../../common/include/

CFLAGS += -std=c23
CFLAGS += -Wall -Wextra -Wpedantic -Werror
CFLAGS += -Wconversion -Wsign-conversion
CFLAGS += -Wshadow -Wstrict-prototypes
CFLAGS += -Wmissing-prototypes -Wformat=2 -Wundef

ifeq ($(BUILD),debug)
    CFLAGS += -O0 -g3 -Wp,-U_FORTIFY_SOURCE
else ifeq ($(BUILD),release)
    CFLAGS += -O3 -DNDEBUG
else ifeq ($(BUILD),relwithdebinfo)
    CFLAGS += -O2 -g
else
    $(error Unsupported BUILD configuration: $(BUILD))
endif

SOURCES := $(shell find $(SRC_DIR) -name "*.c" -type f)
OBJECTS := $(patsubst $(SRC_DIR)/%.c,$(OBJ_DIR)/%.o,$(SOURCES))
DEPS    := $(OBJECTS:.o=.d)

.PHONY: all clean rebuild

all: $(LIBRARY)

$(LIBRARY): $(OBJECTS) | $(LIB_DIR)
	$(AR) $(ARFLAGS) $@ $^

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c | $(OBJ_DIR)
	$(CC) $(CPPFLAGS) $(CFLAGS) -MMD -MP -c $< -o $@

$(OBJ_DIR):
	mkdir -p $@

$(LIB_DIR):
	mkdir -p $@

clean:
	rm -rf $(OBJ_DIR) $(LIBRARY)

rebuild: clean all

-include $(DEPS)
