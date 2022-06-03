#include "fixed-point.h"
#include "stdint.h"
#include <stdio.h>

static int F = 1<<14;

f_point convert_int_to_fp (int n)
{
    return (f_point)n*F;
}

f_point convert_rn_to_fp (struct real_number n)
{
    return n.top*F/n.bottom;
}

int convert_fp_to_int_to_zero (f_point x)
{
    return x/F;
}

int convert_fp_to_int_to_near (f_point x)
{
    if (x >= 0)
    {
        return (x+(F/2))/F;
    } else {
        return (x-(F/2))/F;
    }
}
f_point add_fp_and_n (f_point x, int n)
{
    return (x + (n*F));
}

f_point sub_n_from_fp (f_point x, int n)
{
    return x - (n*F);
}

f_point mult_fp (f_point x, f_point y)
{
    return ((int64_t)x)*y/F;
}

f_point div_fp (f_point x, f_point y)
{
    return ((int64_t)x)*F/y;
}