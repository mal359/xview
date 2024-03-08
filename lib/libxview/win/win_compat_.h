#if !defined(WIN_COMPAT__H)
#define WIN_COMPAT__H

#include <xview/pkg.h>
#include <xview/win_input.h>
#include <xview/rect.h>

void win_getinputmask(Xv_object window, Inputmask *im, Xv_opaque *nextwindownumber);
void win_setinputmask(Xv_object window, Inputmask *im, Inputmask *im_flush, Xv_opaque nextwindownumber);
coord win_getheight(Xv_object window);
coord win_getwidth(Xv_object window);

#endif

