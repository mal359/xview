#if !defined(NTFY_LIST__H)
#define NTFY_LIST__H

#include <xview/pkg.h>
#include <xview_private/ntfy.h>

pkg_private void ntfy_append_node(register NTFY_NODE **node_list, register NTFY_NODE *new_node);
pkg_private void ntfy_remove_node(register NTFY_NODE **node_list, register NTFY_NODE *node_axe);

#endif

