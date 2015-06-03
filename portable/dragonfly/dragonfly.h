/*
 * DragonFly BSD-specific support.
 */

#include <sys/param.h>
#include <time.h>

/* Defines */
#define MAXNAMLEN 255

/* From OpenBSD sys/queue.h */
#define TAILQ_END(head)	NULL

#define TAILQ_FOREACH_SAFE(var, head, field, tvar)		\
  for ((var) = TAILQ_FIRST(head);				\
       (var) != TAILQ_END(head) &&				\
       ((tvar) = TAILQ_NEXT(var, field), 1);			\
       (var) = (tvar))

/* Functions */
void   *reallocarray(void *, size_t, size_t);
