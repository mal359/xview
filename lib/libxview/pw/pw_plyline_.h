#if !defined(PW_PLYLINE__H)
#define PW_PLYLINE__H

#include <xview/pkg.h>
#include <xview_private/pw_impl.h>

Xv_public int pw_polyline(Xv_opaque pw, int dx, int dy, int npts, struct pr_pos *ptlist, u_char *mvlist, struct pr_brush *brush, Pr_texture *tex, int op);

#endif

