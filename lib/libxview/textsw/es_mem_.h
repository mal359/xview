#if !defined(ES_MEM__H)
#define ES_MEM__H

#include <xview/pkg.h>
#include <xview_private/es.h>

Pkg_private Es_handle es_mem_create(u_int max, CHAR *init);
caddr_t es_mem_get(Es_handle esh, Es_attribute attribute, ...);
#ifdef DEBUG
Pkg_private void es_mem_dump(FILE *fd, Es_mem_data pdh);
#endif 

#endif

