#if !defined(FRAME_BASE__H)
#define FRAME_BASE__H

#include <xview/pkg.h>
#include <xview_private/fm_impl.h>

Pkg_private int frame_base_init(Xv_Window owner, Frame frame_public, Attr_attribute avlist[]);
Xv_private void frame_handle_props(Frame frame_public);

#endif

