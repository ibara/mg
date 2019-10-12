/*
 * Support for non-OpenBSD systems.
 */

/* From OpenBSD sys/stat.h; glibc io/sys/stat.h agrees */
#ifndef DEFFILEMODE
#define DEFFILEMODE 0000666
#endif

/* From OpenBSD regex.h */
#ifndef REG_STARTEND
#define REG_STARTEND 00004
#endif

/* From OpenBSD sys/queue.h */
#ifndef SLIST_FOREACH_SAFE
#define SLIST_FOREACH_SAFE(var, head, field, tvar)	\
    for ((var) = SLIST_FIRST(head);			\
	(var) && ((tvar) = SLIST_NEXT(var, field), 1);	\
	(var) = (tvar))
#endif

/* From OpenBSD sys/queue.h */
#ifndef TAILQ_END
#define TAILQ_END(head) NULL
#endif

/* From OpenBSD sys/queue.h */
#ifndef TAILQ_FOREACH_SAFE
#define TAILQ_FOREACH_SAFE(var, head, field, tvar)		\
  for ((var) = TAILQ_FIRST(head);				\
       (var) != TAILQ_END(head) &&				\
       ((tvar) = TAILQ_NEXT(var, field), 1);			\
       (var) = (tvar))
#endif
