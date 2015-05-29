/*
 * Mac OS X-specific support.
 */

#include <sys/param.h>
#include <time.h>

/*
 * fparseln() specific operation flags.
 */
#define FPARSELN_UNESCESC       0x01
#define FPARSELN_UNESCCONT      0x02
#define FPARSELN_UNESCCOMM      0x04
#define FPARSELN_UNESCREST      0x08
#define FPARSELN_UNESCALL       0x0f

/* Functions */
char *fparseln(FILE *, size_t *, size_t *, const char[3], int);
void *reallocarray(void *, size_t, size_t);
