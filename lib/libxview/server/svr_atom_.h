#if !defined(SVR_ATION__H)
#define SVR_ATION__H

#include <xview/pkg.h>
#include <xview_private/svr_impl.h>

Xv_private Atom server_intern_atom(Server_info *server, char *atomName);
Xv_private char *server_get_atom_name(Server_info *server, Atom atom);
Xv_private int server_set_atom_data(Server_info *server, Atom atom, Xv_opaque data);
Xv_private Xv_opaque server_get_atom_data(Server_info *server, Atom atom, int *status);

#endif

