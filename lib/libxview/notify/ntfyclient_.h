#if !defined(NTFYCLIENT__H)
#define NTFYCLIENT__H

#include <xview/pkg.h>
#include <xview_private/ntfy.h>

pkg_private NTFY_CLIENT *ntfy_find_nclient(NTFY_CLIENT *client_list, Notify_client nclient, register NTFY_CLIENT **client_latest);
pkg_private NTFY_CLIENT *ntfy_new_nclient(NTFY_CLIENT **client_list, Notify_client nclient, NTFY_CLIENT **client_latest);
pkg_private void ntfy_remove_client(NTFY_CLIENT **client_list, NTFY_CLIENT *client, NTFY_CLIENT **client_latest, NTFY_WHO who);

#endif

