/*
 * NetBSD-specific support.
 */

#include <time.h>

/* Functions */
void	       *reallocarray(void *, size_t, size_t);
long long	strtonum(const char *, long long, long long, const char **);
