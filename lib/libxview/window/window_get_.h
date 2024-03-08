#if !defined(WINDOW_GET__H)
#define WINDOW_GET__H

#include <xview/pkg.h>
#include <xview_private/windowimpl.h>

Xv_public Xv_opaque _window_get(Xv_Window win_public, Window_attribute attr, ...);
Pkg_private Xv_opaque window_get_attr(Xv_Window win_public, int *status, Window_attribute attr, va_list valist);

#endif

