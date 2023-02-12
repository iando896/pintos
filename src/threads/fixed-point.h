#ifndef FIXEDPOINT_H
#define FIXEDPOINT_H
#include <stdint.h>

typedef int fpoint;

fpoint convert_n_to_f (int n);
int convert_x_to_int_down (fpoint x);
int convert_x_to_int_near (fpoint x);

fpoint add_x_y (fpoint x, fpoint y);
fpoint sub_x_y (fpoint x, fpoint y);
fpoint add_x_n (fpoint x, int n);
fpoint sub_x_n (fpoint x, int n);
fpoint mult_x_y (fpoint x, fpoint y);
fpoint mult_x_n (fpoint x, int n);
fpoint div_x_y (fpoint x, fpoint y);
fpoint div_x_n (fpoint x, int n);

#endif /* threads/fixed-point.h */