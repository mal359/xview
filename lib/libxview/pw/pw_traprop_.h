#if !defined(PW_TRAPROP__H)
#define PW_TRAPROP__H

#include <xview/pkg.h>
#include <xview_private/pw_impl.h>

Xv_public int pw_traprop(register Xv_opaque pw, register int dx, register int dy, struct pr_trap trap, int op, struct pixrect *spr, int sx, int sy);

#endif

