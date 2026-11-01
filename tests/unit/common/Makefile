.DEFAULT_GOAL := all

CC := clang

BUILD ?= debug

ROOT_DIR := ../../..
BUILD_DIR := $(ROOT_DIR)/build

OBJ_DIR := $(BUILD_DIR)/obj/tests/unit/common/$(BUILD)
BIN_DIR := $(BUILD_DIR)/bin

TARGET := test_common
EXECUTABLE := $(BIN_DIR)/$(TARGET)

COMMON_DIR := $(ROOT_DIR)/common
FRAMEWORK_DIR := $(ROOT_DIR)/tests/framework

CPPFLAGS += -I$(COMMON_DIR)/include
CPPFLAGS += -I$(FRAMEWORK_DIR)/include

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

SOURCES := $(shell find . -name "*.c" -type f)
OBJECTS := $(patsubst %.c,$(OBJ_DIR)/%.o,$(SOURCES))
DEPS := $(OBJECTS:.o=.d)

TEST_FRAMEWORK := $(BUILD_DIR)/lib/libsgtest.a
COMMON_LIBRARY := $(BUILD_DIR)/lib/libsgcommon.a

.PHONY: all run clean rebuild

all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS) $(COMMON_LIBRARY) $(TEST_FRAMEWORK) | $(BIN_DIR)
	$(CC) $(LDFLAGS) $(OBJECTS) \
		$(COMMON_LIBRARY) \
		$(TEST_FRAMEWORK) \
		$(LDLIBS) \
		-o $@

$(OBJ_DIR)/%.o: %.c | $(OBJ_DIR)
	$(CC) $(CPPFLAGS) $(CFLAGS) -MMD -MP -c $< -o $@

$(TEST_FRAMEWORK):
	$(MAKE) -C $(FRAMEWORK_DIR) BUILD=$(BUILD)

$(COMMON_LIBRARY):
	$(MAKE) -C $(COMMON_DIR) BUILD=$(BUILD)

$(OBJ_DIR):
	mkdir -p $@

$(BIN_DIR):
	mkdir -p $@

run: $(EXECUTABLE)
	./$(EXECUTABLE)

clean:
	rm -rf $(OBJ_DIR) $(EXECUTABLE)

rebuild: clean all

-include $(DEPS)
