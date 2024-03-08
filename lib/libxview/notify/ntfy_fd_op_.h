#if !defined(NTFY_FD_OP__H)
#define NTFY_FD_OP__H

#include <xview/pkg.h>
#include <xview_private/ntfy.h>

int ntfy_fd_cmp_and(fd_set *a, fd_set *b);
int ntfy_fd_cmp_or(fd_set *a, fd_set *b);
int ntfy_fd_anyset(fd_set *a);
fd_set *ntfy_fd_cpy_or(fd_set *a, fd_set *b);
fd_set *ntfy_fd_cpy_and(fd_set *a, fd_set *b);
fd_set *ntfy_fd_cpy_xor(fd_set *a, fd_set *b);

#endif

