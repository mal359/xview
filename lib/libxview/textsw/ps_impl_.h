#if !defined(PS_IMPL__H)
#define PS_IMPL__H

#include <xview/pkg.h>
#include <xview_private/es.h>

Pkg_private Es_handle ps_create(Xv_opaque client_data, Es_handle original, Es_handle scratch);
caddr_t _ps_get(Es_handle esh, Es_attribute attribute, ...);

#endif

