VERSION ?= 26.3
BUILD ?= debug
THREADS ?= 4

.DEFAULT_GOAL := all

.PHONY: all common codegen server run clean

all: server

common:
	$(MAKE) -C common

codegen: common
	python3 -m tools.codegen $(VERSION)

server: codegen
	$(MAKE) -C server BUILD=$(BUILD) VERSION=$(VERSION)

run: server
	./build/$(BUILD)/bin/singularity-server -b 0.0.0.0 -p 25565 -t $(THREADS) -v

clean:
	$(MAKE) -C server clean
