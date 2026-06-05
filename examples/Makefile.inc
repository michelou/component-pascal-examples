ifndef GPCP_HOME
    $(error Variable GPCP_HOME is not set)
endif
ifndef JAVA_HOME
    $(error Variable JAVA_HOME is not set)
endif
ifndef JROOT
    $(error Variable JROOT is not set)
endif

ifeq ($(OS),Windows_NT)
#
############################## MSYS2 environment #############################
ifeq ($(MSYSTEM),MINGW64)
CP           = cp
DIFF         = diff
ECHO         = echo
FIND         = find
GREP         = egrep
ifndef MSYS
GPCP_JVM     = $(subst \,/,$(JROOT))/bin/gpcp.bat
GPCP_NET     = $(subst \,/,$(GPCP_HOME))/bin/gpcp.exe
JAVA         = $(subst \,/,$(JAVA_HOME))/bin/java.exe
else
GPCP_JVM     = gpcp
GPCP_NET     = gpcp
JAVA         = java
endif
MKDIR        = mkdir
RM           = rm
TAR          = tar
#
############################# Windows environment ############################
else
#
CP           = /usr/bin/cp.exe
DIFF         = /usr/bin/diff.exe
ECHO         = /usr/bin/echo.exe
FIND         = /usr/bin/find.exe
GPCP_JVM     = $(subst \,/,$(JROOT))/bin/gpcp.bat
GPCP_NET     = $(subst \,/,$(GPCP_HOME))/bin/gpcp.exe
GREP         = /usr/bin/grep.exe
JAVA         = $(subst \,/,$(JAVA_HOME))/bin/java.exe
MKDIR        = /usr/bin/mkdir.exe
RM           = /usr/bin/rm.exe
#
TAR          = /usr/bin/tar.exe
endif
#
TARGET_EXT   = .exe
#
############################## Unix environment ##############################
else
CP           = cp
DIFF         = diff
ECHO         = echo
FIND         = find
GPCP_JVM     = $(JROOT)/bin/gpcp
GPCP_NET     = $(GPCP_HOME)/bin/gpcp
GREP         = egrep
JAVA         = $(JAVA_HOME)/bin/java
MKDIR        = mkdir
RM           = rm
TAR          = tar
#
TARGET_EXT   =
endif
