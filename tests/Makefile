.DEFAULT_GOAL := all

BUILD ?= debug
MODULE ?= all

FRAMEWORK_DIR := framework
COMMON_TEST_DIR := unit/common

.PHONY: all framework unit test clean

all: framework unit

framework:
	$(MAKE) -C $(FRAMEWORK_DIR) BUILD=$(BUILD)

unit:
ifeq ($(MODULE),all)
	$(MAKE) -C $(COMMON_TEST_DIR) BUILD=$(BUILD) run
else ifeq ($(MODULE),common)
	$(MAKE) -C $(COMMON_TEST_DIR) BUILD=$(BUILD) run
else
	$(error Unknown test module: $(MODULE))
endif

test: unit

clean:
	$(MAKE) -C $(FRAMEWORK_DIR) clean
	$(MAKE) -C $(COMMON_TEST_DIR) clean
