#if !defined(NTFY_CTBL__H)
#define NTFY_CTBL__H

#include <xview/pkg.h>
#include <xview_private/ntfy.h>

void ntfy_add_to_table(NTFY_CLIENT *client, NTFY_CONDITION *condition, int type);
void ntfy_remove_from_table(NTFY_CLIENT *client, NTFY_CONDITION *condition);
pkg_private NTFY_ENUM ntfy_new_enum_conditions(NTFY_CNDTBL *cnd_list, NTFY_ENUM_FUNC enum_func, NTFY_ENUM_DATA context);
pkg_private NTFY_ENUM ntfy_new_paranoid_enum_conditions(NTFY_CNDTBL *cnd_list, NTFY_ENUM_FUNC enum_func, NTFY_ENUM_DATA context);
#ifdef notdef
void dump_table(int type);
#endif

#endif

