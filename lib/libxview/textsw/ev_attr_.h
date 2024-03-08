#if !defined(EV_ATTR__H)
#define EV_ATTR__H

#include <xview/pkg.h>
#include <xview_private/ev.h>

Pkg_private Xv_opaque ev_get(Ev_handle view, Ev_attribute attribute, Xv_opaque args1, Xv_opaque args2, Xv_opaque args3);
Pkg_private Ev_status _ev_set(Ev_handle view, ...);
Pkg_private void _ev_notify(Ev_handle view, ...);

#endif

