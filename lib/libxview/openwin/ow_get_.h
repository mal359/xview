#if !defined(OW_GET__H)
#define OW_GET__H

#include <xview/pkg.h>
#include <xview_private/ow_impl.h>

Pkg_private Xv_opaque openwin_get(Openwin owin_public, int *get_status, Openwin_attribute attr, va_list valist);

#endif

