#if !defined(FMCMD_GET__H)
#define FMCMD_GET__H

#include <xview/pkg.h>
#include <xview/frame.h>

Pkg_private Xv_opaque frame_cmd_get_attr(Frame frame_public, int *status, Frame_attribute attr, va_list valist);

#endif

