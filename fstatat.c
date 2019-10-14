/*
 * fstatat(2) wrapper for systems that do not support it.
 * Written by Brian Callahan <bcallah@openbsd.org> and released
 * into the Public Domain.
 */

#include <sys/stat.h>

#include <stdio.h>

#include "config.h"

#ifndef HAVE_FSTATAT

int
fstatat(int fd, const char *path, struct stat *buf, int flag)
{

	return stat(path, buf);
}

#endif /* !HAVE_FSTATAT */
