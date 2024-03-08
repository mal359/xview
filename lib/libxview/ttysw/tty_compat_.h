#if !defined(TTY_COMPAT__H)
#define TTY_COMPAT__H

#include <xview/pkg.h>
#include <xview/tty.h>

Sv1_public void ttysw_becomeconsole(caddr_t ttysw0);
int ttysw_cmd(caddr_t ttysw_opaque, char *buf, int buflen);
Xv_public int ttysw_input(Tty ttysw0, char *addr, int len);
#ifdef OW_I18N
Xv_public int ttysw_input_wcs(caddr_t ttysw0, wchar_t *addr, int len);
#endif

#endif

