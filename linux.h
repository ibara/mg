/*
 * Linux-specific support. (Cygwin as well.)
 */

#ifdef __CYGWIN__
#include <sys/socket.h>
#endif
#include <sys/types.h>

#include <stdio.h>

/* Defines */
#define TCSASOFT 0
