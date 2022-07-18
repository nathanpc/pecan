### variables.mk
### Common variables used throught the project.
###
### Author: Nathan Campos <nathan@innoveworkshop.com>

# Environment
PLATFORM := $(shell uname -s)

# Tools
CC    = gcc
AR    = ar
RM    = rm -f
GDB   = gdb
MKDIR = mkdir -p
TOUCH = touch

# Handle OS X-specific tools.
ifeq ($(PLATFORM), Darwin)
	CC  = clang
	CXX = clang
	GDB = lldb
endif

# Flags
CFLAGS  = -Wall -Wextra -pedantic
LDFLAGS =
