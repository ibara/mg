/*
 * Linux-specific support. (Cygwin as well.)
 */

#ifdef __CYGWIN__
#include <sys/socket.h>
#endif
#include <sys/types.h>

/* Defines */
#define TCSASOFT 0

/* Functions */
void	       *reallocarray(void *, size_t, size_t);
char	       *fgetln(FILE *, size_t *);
size_t		strlcat(char *, const char *, size_t);
size_t		strlcpy(char *, const char *, size_t);
long long	strtonum(const char *, long long, long long, const char **);
