#if !defined(NINTIDEATH__H)
#define NINTIDEATH__H

#include <xview/pkg.h>
#include <xview_private/ntfy.h>

typedef Notify_error(*Notify_error_func)();

Notify_error notify_interpose_destroy_func(Notify_client nclient, Notify_func func);
Notify_error_func notify_set_destroy_interposer(Notify_error_func func);


#endif

