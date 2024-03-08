#if !defined(QUARK__H)
#define QUARK__H

#include <xview/pkg.h>
#include <X11/Xresource.h>

Xv_private Xv_opaque db_name_from_qlist(XrmQuarkList qlist);
Xv_private XrmQuarkList db_qlist_from_name(char *name, XrmQuarkList parent_quarks);
Xv_private Xv_opaque db_get_data(XrmDatabase db, XrmQuarkList instance_qlist, char *attr_name, Attr_attribute attr, Xv_opaque default_value);

#endif
