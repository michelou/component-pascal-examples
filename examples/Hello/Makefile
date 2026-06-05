##
## Copyright (c) 2018-2026 Stéphane Micheloud
##
## Licensed under the MIT License.
##
##############################################################################

include ../Makefile.inc

MAIN_NAME = Hello
MAIN_CLASS = CP.Hello.$(MAIN_NAME)
MAIN_ARGS =

TARGET ?= net

SOURCE_DIR      = src
SOURCE_MAIN_DIR = $(SOURCE_DIR)/main/cp
TARGET_DIR      = target
CLASSES_DIR     = $(TARGET_DIR)/classes

## https://www.baeldung.com/linux/makefile-if-else-conditionals
ifeq ($(DEBUG),1)
VERBOSE_OPT = -verbose
else
VERBOSE_OPT = -quiet
endif
GPCP_OPTS = $(VERBOSE_OPT) -strict -target:$(TARGET)

XXXXX = C:\\opt\\gpcp-JVM-1.4.08
CPATH = $(XXXXX)\jars\cprts.jar;$(CLASSES_DIR)
CPSYM = .;$(XXXXX)\\symfiles;$(XXXXX)\\symfiles\\JvmSystem

##############################################################################
## main rules

SOURCE_MAIN_FILE = $(SOURCE_MAIN_DIR)/$(MAIN_NAME).cp

TARGET_NAME = $(MAIN_NAME)$(TARGET_EXT)
TARGET_FILE = $(TARGET_DIR)/$(TARGET_NAME)

all: build run

build: $(TARGET_FILE)

$(TARGET_FILE): $(SOURCE_MAIN_FILE)
ifeq ($(TARGET),jvm)
	[[ -d "$(CLASSES_DIR)" ]] || "$(MKDIR)" -p "$(CLASSES_DIR)"
	pushd $(CLASSES_DIR) 1>/dev/null; \
	"$(GPCP_JVM)" $(GPCP_OPTS) "q:\examples\Hello\src\main\cp\Hello.cp" ; \
	popd 1>/dev/null
else
	[[ -d "$(TARGET_DIR)" ]] || "$(MKDIR)" -p "$(TARGET_DIR)"
	pushd $(TARGET_DIR) 1>/dev/null; \
	export CPSYM=$(CPSYM) & \
	"$(GPCP_NET)" $(GPCP_OPTS) "q:\examples\Hello\src\main\cp\Hello.cp" ; \
	popd 1>/dev/null
endif

clean:
	"$(RM)" -rf "$(TARGET_DIR)"

run: build
ifeq ($(TARGET),jvm)
	$(ECHO) "\"$(JAVA)\" -cp \"$(CPATH)\" $(MAIN_CLASS) $(MAIN_ARGS)"
else
	@[[ -f "$(TARGET_FILE)" ]] && "$(TARGET_FILE)"
endif
  
help:
	@$(ECHO) "Usage: make all|build|clean|help|lint|run"
	@$(ECHO) ""
	@$(ECHO) "   Subcommands:"
	@$(ECHO) "     all    alias for build"
	@$(ECHO) "     build  compile Ada source files"
	@$(ECHO) "     clean  delete generated files"
	@$(ECHO) "     help   print this help message"
	@$(ECHO) "     run    execute main program \"$(TARGET_NAME)\""

##############################################################################
## phony

.PHONY: all build clean help run

.SUFFIXES:
.SUFFIXES: .class .cp
