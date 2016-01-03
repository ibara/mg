# Mg portable GNUmakefile
# This file written by Brian Callahan <bcallah@openbsd.org>
# and released into the Public Domain.

PROG = mg

PREFIX ?= /usr/local
MANDIR ?= ${PREFIX}/man
DOCDIR ?= ${PREFIX}/share/doc/mg
INSTALL = /usr/bin/install

# CFLAGS:
# -DREGEX	-- Enable regex search commands
# -DNO_THEO	-- Disable M-x theo command
CFLAGS ?= -O2 -pipe
CFLAGS += -Wall -DREGEX -DNO_THEO

LIBS = -lcurses

OBJS =	autoexec.o basic.o bell.o buffer.o cinfo.o dir.o display.o \
	echo.o extend.o file.o fileio.o funmap.o help.o kbd.o keymap.o \
	line.o macro.o main.o match.o modes.o paragraph.o re_search.o \
	region.o search.o spawn.o tty.o ttyio.o ttykbd.o undo.o util.o \
	version.o window.o word.o yank.o

#
# More or less standalone extensions.
#
OBJS +=	cmode.o cscope.o dired.o grep.o tags.o theo.o

#
# Mg portable setup.
#
UNAME_S := $(shell uname -s)
ifeq ($(UNAME_S),Linux)
CFLAGS += -D_GNU_SOURCE -D__dead="__attribute__((__noreturn__))" -Dst_mtimespec=st_mtim
OBJS +=	portable/linux/fgetln.o portable/common/fparseln.o \
	portable/common/reallocarray.o portable/linux/strlcat.o \
	portable/linux/strlcpy.o portable/common/strtonum.o
else ifeq ($(UNAME_S),Darwin)
CFLAGS += -DMSG_NOSIGNAL=SO_NOSIGPIPE -DLOGIN_NAME_MAX=MAXLOGNAME
OBJS += portable/common/fparseln.o portable/common/reallocarray.o \
	portable/common/strtonum.o
LIBS += -lutil
else ifeq ($(UNAME_S),FreeBSD)
CFLAGS += -D__dead=__dead2 -DLOGIN_NAME_MAX=MAXLOGNAME
OBJS += portable/common/reallocarray.o
LIBS += -lutil
else ifeq ($(UNAME_S),OpenBSD)
$(error Type 'make' instead)
else ifeq ($(UNAME_S),NetBSD)
OBJS += portable/common/reallocarray.o portable/common/strtonum.o
else ifeq ($(UNAME_S),DragonFly)
CFLAGS += -D__dead=__dead2 -DLOGIN_NAME_MAX=MAXLOGNAME
OBJS += portable/common/reallocarray.o
LIBS += -lutil
else ifeq ($(UNAME_S),Bitrig)
$(error Type 'make' instead)
else ifeq ($(findstring CYGWIN,$(UNAME_S)),CYGWIN)
CFLAGS += -D_GNU_SOURCE -D__dead="__attribute__((__noreturn__))" -Dst_mtimespec=st_mtim
OBJS +=	portable/linux/fgetln.o portable/common/fparseln.o \
	portable/common/reallocarray.o portable/linux/strlcat.o \
	portable/linux/strlcpy.o portable/common/strtonum.o
endif

all: ${OBJS}
	${CC} -o ${PROG} ${OBJS} ${LIBS}

install: all
	${INSTALL} -d -m 755 ${DESTDIR}${PREFIX}/bin
	${INSTALL} -d -m 755 ${DESTDIR}${MANDIR}/man1
	${INSTALL} -d -m 755 ${DESTDIR}${DOCDIR}
	${INSTALL} -s -m 555 ${PROG} ${DESTDIR}${PREFIX}/bin
	${INSTALL} -m 444 mg.1 ${DESTDIR}${MANDIR}/man1/${PROG}.1
	${INSTALL} -m 444 README.md ${DESTDIR}${DOCDIR}
	${INSTALL} -m 444 README-Mg ${DESTDIR}${DOCDIR}
	${INSTALL} -m 444 tutorial ${DESTDIR}${DOCDIR}

uninstall:
	rm -f ${DESTDIR}${PREFIX}/bin/${PROG} \
		${DESTDIR}${MANDIR}/man1/${PROG}.1
	rm -rf ${DESTDIR}${DOCDIR}

clean:
	rm -f ${PROG} ${OBJS}
