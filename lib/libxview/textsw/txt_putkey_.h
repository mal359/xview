#if !defined(TXT_PUTKEY__H)
#define TXT_PUTKEY__H

#include <xview/pkg.h>
#include <xview_private/txt_impl.h>

Pkg_private void textsw_begin_put(Textsw_view_handle view, int inform_svc);
Pkg_private int textsw_end_put(register Textsw_view_handle view);


static int textsw_do_put(register Textsw_view_handle view, int local_operands);

Pkg_private void textsw_put(Textsw_view_handle view);

#endif

