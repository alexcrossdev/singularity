CC ?= clang

BUILD ?= debug
VERSION ?= 26.3

ROOT_DIR := ..
BUILD_DIR := $(ROOT_DIR)/build/$(BUILD)
OBJ_DIR := $(BUILD_DIR)/obj/server
BIN_DIR := $(BUILD_DIR)/bin

TARGET := singularity-server
TEST_TARGET := test_core
COMMON_LIBRARY := $(ROOT_DIR)/build/$(BUILD)/lib/libsgcommon.a

SRC_DIR := src
TEST_DIR := $(ROOT_DIR)/tests

INCLUDE_DIRS := \
	$(SRC_DIR) \
	$(SRC_DIR)/generated/$(VERSION) \
	$(ROOT_DIR)/data/generated/$(VERSION) \
	$(ROOT_DIR)/common/include

CPPFLAGS += -D_GNU_SOURCE
CPPFLAGS += $(addprefix -I,$(INCLUDE_DIRS))

CFLAGS += -std=c23
CFLAGS += -Wall -Wextra
CFLAGS += -Wshadow -Wvla
CFLAGS += -Wstrict-prototypes -Wmissing-prototypes
CFLAGS += -Wno-unused-parameter
CFLAGS += -pthread

LDFLAGS += -pthread
LDLIBS += -lcrypto -lm

ifeq ($(BUILD),debug)
	CFLAGS += -O0 -g3 -fno-omit-frame-pointer
	CFLAGS += -DDEBUG -Wp,-U_FORTIFY_SOURCE

else ifeq ($(BUILD),release)
	CFLAGS += -O2 -g -fno-omit-frame-pointer

else ifeq ($(BUILD),tsan)
	CFLAGS += -O1 -g -fno-omit-frame-pointer
	CFLAGS += -fsanitize=thread
	LDFLAGS += -fsanitize=thread

else ifeq ($(BUILD),asan)
	CFLAGS += -O1 -g -fno-omit-frame-pointer
	CFLAGS += -fsanitize=address,undefined
	CFLAGS += -fno-sanitize-recover=undefined
	LDFLAGS += -fsanitize=address,undefined

else
	$(error Unsupported build configuration: $(BUILD))
endif

GENERATED_DIR := $(ROOT_DIR)/data/generated/$(VERSION)

GENERATED_SOURCES := \
	$(GENERATED_DIR)/blocks.c \
	$(GENERATED_DIR)/block_states.c \
	$(GENERATED_DIR)/registries.c \
	$(GENERATED_DIR)/data_registries.c

SOURCES := \
	$(shell find $(SRC_DIR) $(VENDOR_DIR) -name "*.c" -type f) \
	$(GENERATED_SOURCES)

OBJECTS := $(patsubst %.c,$(OBJ_DIR)/%.o,$(SOURCES))

LIB_OBJECTS := $(filter-out $(OBJ_DIR)/$(SRC_DIR)/main.o,$(OBJECTS))

TEST_SOURCE := $(TEST_DIR)/test_core.c
TEST_OBJECT := $(OBJ_DIR)/$(TEST_SOURCE:.c=.o)

DEPS := $(OBJECTS:.o=.d) $(TEST_OBJECT:.o=.d)

SERVER := $(BIN_DIR)/$(TARGET)
TEST_BIN := $(BIN_DIR)/$(TEST_TARGET)

.PHONY: all clean rebuild test run tsan asan
.PHONY: generate-data extract-vanilla inspect-data generate-registry

all: $(SERVER)

$(SERVER): $(OBJECTS) $(COMMON_LIBRARY) | $(BIN_DIR)
	$(CC) $(LDFLAGS) $(OBJECTS) $(COMMON_LIBRARY) $(LDLIBS) -o $@

$(COMMON_LIBRARY):
	$(MAKE) -C $(ROOT_DIR)/common BUILD=$(BUILD)

$(TEST_BIN): $(TEST_OBJECT) $(LIB_OBJECTS) | $(BIN_DIR)
	$(CC) $(LDFLAGS) $^ $(LDLIBS) -o $@

$(OBJ_DIR)/%.o: %.c
	@mkdir -p $(dir $@)
	$(CC) $(CPPFLAGS) $(CFLAGS) \
		-MMD -MP \
		-c $< -o $@

$(BIN_DIR):
	mkdir -p $@

test: $(TEST_BIN)
	./$(TEST_BIN)

run: $(SERVER)
	./$(SERVER) $(ARGS)

tsan:
	$(MAKE) BUILD=tsan test

asan:
	$(MAKE) BUILD=asan test

clean:
	rm -rf $(BUILD_DIR)

rebuild: clean all

-include $(DEPS)

# Vanilla Minecraft data generation

MINECRAFT_VERSION := 26.3

MINECRAFT_JAR := $(HOME)/.local/share/PrismLauncher/libraries/com/mojang/minecraft/$(MINECRAFT_VERSION)/minecraft-$(MINECRAFT_VERSION)-client.jar

VANILLA_DATA := assets/vanilla/$(MINECRAFT_VERSION)

extract-vanilla:
	python3 tools/extract_vanilla.py

inspect-data: extract-vanilla
	python3 tools/inspect_vanilla.py

generate-registry: inspect-data
	python3 tools/generate_registry.py

generate-data: generate-registry
