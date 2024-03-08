#if !defined(CNVS_SCROL__H)
#define CNVS_SCROL__H

#include <xview/pkg.h>
#include <xview_private/cnvs_impl.h>
#include <xview/scrollbar.h>

Pkg_private void canvas_set_scrollbar_object_length(register Canvas_info *canvas, Scrollbar_setting direction, Scrollbar sb);
Pkg_private void canvas_update_scrollbars(Canvas_info *canvas);
Pkg_private void canvas_scroll(Xv_Window paint_window, Scrollbar sb);

#endif

