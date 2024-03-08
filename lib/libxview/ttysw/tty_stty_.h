#if !defined(TTY_STTY__H)
#define TTY_STTY__H

#include <xview/pkg.h>
#include <xview_private/tty_impl.h>

Pkg_private int ttysw_saveparms(int ttyfd);
#ifdef XV_USE_TERMIOS
Pkg_private void we_setptyparms(register struct termios *tp);
#else 
Pkg_private void we_setptyparms(int ldisc, int localmodes, struct sgttyb *mode, struct tchars *tchars, struct ltchars *ltchars);
#endif 

#endif

