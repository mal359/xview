#if !defined(WIN_BELL__H)
#define WIN_BELL__H

#include <xview/pkg.h>
#include <X11/Xresource.h>

void win_bell(Xv_object window, struct timeval tv, register Xv_object pw);
void win_blocking_wait(struct timeval wait_tv);
Xv_private void win_beep(Display *display, struct timeval tv);

#endif

