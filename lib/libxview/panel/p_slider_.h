#if !defined(P_SLIDER__H)
#define P_SLIDER__H

#include <xview/pkg.h>
#include <xview_private/panel_impl.h>

Pkg_private int slider_init(Panel panel_public, Panel_item item_public, Attr_avlist avlist);
Pkg_private Xv_opaque slider_set_avlist(Panel_item item_public, Attr_avlist avlist);
Pkg_private Xv_opaque slider_get_attr(Panel_item item_public, int *status, Attr_attribute which_attr, va_list valist); 
Pkg_private int slider_destroy(Panel_item item_public, Destroy_status status);

#endif

