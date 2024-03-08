#if !defined(XV_LIST__H)
#define XV_LIST__H

#include <xview/pkg.h>
#include <xview_private/xv_list.h>

Xv_private void xv_sl_init(Xv_sl_head head);
Xv_private Xv_sl_link xv_sl_add_after(register Xv_sl_head head, register Xv_sl_link link, register Xv_sl_link new);
Xv_private Xv_sl_link xv_sl_remove_after(register Xv_sl_head head, register Xv_sl_link link);
Xv_private Xv_sl_link xv_sl_remove(register Xv_sl_head head, register Xv_sl_link link);

#endif

