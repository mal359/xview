#if !defined(SELECTION__H)
#define SELECTION__H

#include <xview/pkg.h>
#include <xview/window.h>
#include <xview_private/sel_impl.h>

Pkg_private int sel_init(Xv_Window parent, Selection sel_public, Attr_avlist avlist);
Pkg_private Xv_opaque sel_set_avlist(Selection sel_public, Attr_avlist avlist);
Pkg_private Xv_opaque sel_get_attr(Selection sel_public, int *status, Attr_attribute attr, va_list valist);
Pkg_private int sel_destroy(Selection sel_public, Destroy_status status);

#endif

