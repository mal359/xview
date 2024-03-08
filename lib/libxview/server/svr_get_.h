#if !defined(SVR_GET__H)
#define SVR_GET__H

#include <xview/pkg.h>
#include <xview/server.h>

Pkg_private Xv_opaque server_get_attr(Xv_Server server_public, int *status, Server_attr attr, va_list valist);
Pkg_private Xv_opaque server_get_attr_tier2(Xv_Server server_public, int *status, Server_attr attr, va_list valist);
Xv_private Xv_opaque server_get_timestamp(Xv_Server server_public);
Xv_private Xv_opaque server_get_fullscreen(Xv_Server server_public);

#endif

