/*
 * Mac OS X-specific support.
 */

#include <sys/param.h>
#include <sys/stat.h>

#include <stdio.h>
#include <time.h>

/*
 * fparseln() specific operation flags.
 */
#define FPARSELN_UNESCESC       0x01
#define FPARSELN_UNESCCONT      0x02
#define FPARSELN_UNESCCOMM      0x04
#define FPARSELN_UNESCREST      0x08
#define FPARSELN_UNESCALL       0x0f

/* struct stat compatibilty */
#define st_atim st_atimespec
#define st_mtim st_mtimespec
#define st_ctim st_ctimespec
