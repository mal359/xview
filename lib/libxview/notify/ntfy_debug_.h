#if !defined(NTFY_DEBUG__H)
#define NTFY_DEBUG__H

#include <xview/pkg.h>
#include <xview_private/ntfy.h>

pkg_private void ntfy_set_errno_debug(Notify_error error);
pkg_private void ntfy_set_warning_debug(Notify_error error);
pkg_private void ntfy_assert_debug(int code);
pkg_private void ntfy_fatal_error(char *msg);

#endif

