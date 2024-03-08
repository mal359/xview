#if !defined(CNVS_INPUT__H)
#define CNVS_INPUT__H

#include <xview/pkg.h>
#include <xview/canvas.h>
#include <xview/win_input.h>
#include <xview_private/cnvs_impl.h>

Pkg_private Notify_value canvas_view_event(Canvas_view view_public, Event *event, Notify_arg arg, Notify_event_type type);
Pkg_private Notify_value canvas_paint_event(Xv_Window window_public, Event *event, Notify_arg arg, Notify_event_type type);
Pkg_private void canvas_inform_repaint(Canvas_info *canvas, Xv_Window paint_window);
Xv_private Event *canvas_window_event(Canvas canvas_public, register Event *event);
Xv_private Event *canvas_event(Canvas canvas_public, register Event *event);

#endif

