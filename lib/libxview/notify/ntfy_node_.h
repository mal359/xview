#if !defined(NTFY_NODE__H)
#define NTFY_NODE__H

#include <xview/pkg.h>
#include <xview_private/ntfy.h>

pkg_private NTFY_NODE *ntfy_alloc_node(void);
pkg_private void ntfy_replenish_nodes(void);
pkg_private void ntfy_free_node(register NTFY_NODE *node);

#endif

