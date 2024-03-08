#if !defined(NINTN_WAIT__H)
#define NINTN_WAIT__H

#include <xview/pkg.h>
#include <xview_private/ntfy.h>

#if !defined(SVR4) && !defined(linux)
Notify_value notify_next_wait3_func(Notify_client nclient, int pid, union wait *status, struct rusage *rusage);
#else /* SVR4 */
Notify_value notify_next_wait3_func(Notify_client nclient, int pid, int *status, struct rusage *rusage);
#endif /* SVR4 */

#endif

