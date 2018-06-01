[![Build Status](https://travis-ci.org/ibara/mg.svg?branch=master)](https://travis-ci.org/ibara/mg)

mg
==
This is a portable version of the Mg editor from OpenBSD by an OpenBSD
developer who did a bunch of overhaul work on the version of Mg found in
the OpenBSD base system.

Mg is intended to be a small, fast, and portable editor for people who
can't (or don't want to) run emacs for one reason or another, or are not
familiar with the vi editor. It is compatible with emacs because there
shouldn't be any reason to learn more editor types than emacs or vi.

This repository aggressively tracks upstream.

Compiling
---------
`mg` has a simple configure script that generates a `POSIX` `Makefile`.
```
$ ./configure
$ make
$ sudo make install
```

Dependencies
------------
You need the ncurses library.

Testing
-------
Tested on recent versions of Arch, Cygwin, Debian, DragonFly BSD, FreeBSD,
Mac OS X (10.10 or later), NetBSD, Slackware, and Ubuntu.

Licensing
---------
Files originating from `mg` are Public Domain. Files needed for portability
have their own individual license headers.
All licenses are ISC or BSD.

Get a tarball
-------------
http://devio.us/~bcallah/mg/mg-20180601.tar.gz
