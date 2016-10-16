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

/* struct stat compatibilty */
#define st_atim st_atimespec
#define st_mtim st_mtimespec
#define st_ctim st_ctimespec

/* From OpenBSD sys/queue.h */
#define SLIST_FOREACH_SAFE(var, head, field, tvar)	\
    for ((var) = SLIST_FIRST(head);			\
	(var) && ((tvar) = SLIST_NEXT(var, field), 1);	\
	(var) = (tvar))

/* Functions */
char *fparseln(FILE *, size_t *, size_t *, const char[3], int);
void *reallocarray(void *, size_t, size_t);
long long	strtonum(const char *, long long, long long, const char **);
int	futimens(int, const struct timespec[2]);
