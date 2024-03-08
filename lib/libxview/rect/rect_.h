#if !defined(RECT__H)
#define RECT__H

#include <xview/pkg.h>
#include <xview/rect.h>


void rect_intersection(register struct rect *r1, register struct rect *r2, register struct rect *r);
unsigned rect_clipvector(register struct rect *r, int *x1arg, int *y1arg, int *x2arg, int *y2arg);
unsigned rect_order(struct rect *r1, struct rect *r2, int sortorder);
struct rect rect_bounding(struct rect *r1, struct rect *r2);

#endif

