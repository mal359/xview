#if !defined(NDET_DIE__H)
#define NDET_DIE__H

#include <xview/pkg.h>
#include <xview_private/ntfy.h>


Notify_error notify_die(Destroy_status status);
pkg_private NTFY_ENUM ndet_remove_all(NTFY_CLIENT *client, NTFY_CONDITION *condition, NTFY_ENUM_DATA context);

#endif

