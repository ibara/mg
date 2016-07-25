mg
==
This is a portable version of the Mg editor from OpenBSD by the former
OpenBSD developer who recently did a bunch of overhaul work on the
version of Mg found in the OpenBSD base system.

Mg is intended to be a small, fast, and portable editor for people who
can't (or don't want to) run emacs for one reason or another, or are not
familiar with the vi editor. It is compatible with emacs because there
shouldn't be any reason to learn more editor types than emacs or vi.

Compiling
---------
Type make or gmake, depending on your operating system.
FreeBSD, NetBSD, and DragonFly BSD should type `gmake`.
All other operating systems should type `make`.

Testing
-------
Tested on recent versions of Arch, Cygwin, Debian, DragonFly BSD, FreeBSD,
Mac OS X, NetBSD, Slackware, and Ubuntu.

Licensing
---------
Most files in the top-level directory are Public Domain. Files under the
portable/ directory have their own individual license headers.
All licenses are ISC or BSD.

Get a tarball
-------------
http://devio.us/~bcallah/mg/mg-20160725.tar.gz
