/*
 * Linux-specific support.
 */

#include <sys/types.h>

/* Defines */
#define TCSASOFT 0
#define TAILQ_END(head) NULL

/* From OpenBSD sys/queue.h */
#define TAILQ_FOREACH_SAFE(var, head, field, tvar)		\
  for ((var) = TAILQ_FIRST(head);				\
       (var) != TAILQ_END(head) &&				\
       ((tvar) = TAILQ_NEXT(var, field), 1);			\
       (var) = (tvar))

/* Functions */
void	       *reallocarray(void *, size_t, size_t);
char	       *fgetln(FILE *, size_t *);
size_t		strlcat(char *, const char *, size_t);
size_t		strlcpy(char *, const char *, size_t);
long long	strtonum(const char *, long long, long long, const char **);
