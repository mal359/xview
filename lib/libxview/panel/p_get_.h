#if !defined(P_GET__H)
#define P_GET__H

#include <xview/pkg.h>
#include <xview_private/panel_impl.h>

Pkg_private Xv_opaque panel_get_attr(Panel panel_public, int *status, register Attr_attribute attr, va_list valist);

#endif

