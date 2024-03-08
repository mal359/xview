#if !defined(RECT_UTIL__H)
#define RECT_UTIL__H

#include <xview/pkg.h>
#include <xview/rect.h>

int rect_distance(register Rect *rect, register int x, register int y, register int *x_used, register int *y_used);
int rect_right_of(Rect *rect1, Rect *rect2);
int rect_below(Rect *rect1, Rect *rect2);

#endif

