#ifndef FIXED_POINT_H
#define FIXED_POINT_H

typedef int f_point;

struct real_number 
{
    int top;
    int bottom;
};

f_point convert_int_to_fp (int n);
f_point convert_rn_to_fp (struct real_number n);
int convert_fp_to_int_to_zero (f_point x);
int convert_fp_to_int_to_near (f_point x);
f_point add_fp (f_point fp1, f_point fp2);
f_point sub_fp (f_point fp1, f_point fp2);
f_point add_fp_and_n (f_point x, int n);
f_point sub_n_from_fp (f_point x, int n);
f_point mult_fp (f_point x, f_point y);
f_point div_fp (f_point x, f_point y);
#endif /* threads/fixed_point.h */