#if !defined(PW_READ__H)
#define PW_READ__H

#include <xview/pkg.h>
#include <pixrect/pixrect.h>
#include <X11/Xresource.h>


Xv_public int xv_read(Pixrect *pr, int x, int y, int width, int height, int op, Xv_opaque window, int sx, int sy);
Xv_public int xv_read_internal(Pixrect *pr, int x, int y, int width, int height, int op, Display *display, Drawable d, int sx, int sy);

#endif

