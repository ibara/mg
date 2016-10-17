/*
 * Support for non-OpenBSD systems.
 */

#ifndef SLIST_FOREACH_SAFE
/* From OpenBSD sys/queue.h */
#define SLIST_FOREACH_SAFE(var, head, field, tvar)	\
    for ((var) = SLIST_FIRST(head);			\
	(var) && ((tvar) = SLIST_NEXT(var, field), 1);	\
	(var) = (tvar))
#endif

#ifndef TAILQ_END
/* From OpenBSD sys/queue.h */
#define TAILQ_END(head) NULL
#endif

#ifndef TAILQ_FOREACH_SAFE
/* From OpenBSD sys/queue.h */
#define TAILQ_FOREACH_SAFE(var, head, field, tvar)		\
  for ((var) = TAILQ_FIRST(head);				\
       (var) != TAILQ_END(head) &&				\
       ((tvar) = TAILQ_NEXT(var, field), 1);			\
       (var) = (tvar))
#endif
