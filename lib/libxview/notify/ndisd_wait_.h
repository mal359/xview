#if !defined(NDISD_WAIT__H)
#define NDISD_WAIT__H

#include <xview/pkg.h>
#include <xview_private/ntfy.h>

#if !defined(SVR4) && !defined(linux)
Notify_value notify_default_wait3(Notify_client client, int pid, union wait *status, struct rusage *rusage);
#else /* SVR4 */
Notify_value notify_default_wait3(Notify_client client, int pid, int *status, struct rusage *rusage);
#endif /* SVR4 */

#endif

