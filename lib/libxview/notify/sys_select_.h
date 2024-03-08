#if !defined(SYS_SELECT__H)
#define SYS_SELECT__H

#include <xview/pkg.h>
#include <xview_private/ntfy.h>


#ifndef SVR4
#ifndef __linux__
pkg_private int notify_select(int nfds, int *readfds, int *writefds, int *exceptfds, struct timeval *tv);
#else
pkg_private int notify_select(int nfds, fd_set *readfds, fd_set *writefds, fd_set *exceptfds, struct timeval *tv);
#endif
#else 
pkg_private int notify_select(int nfds, fd_set *in0, fd_set *out0, fd_set *ex0, struct timeval *tv);
#endif 

#endif
