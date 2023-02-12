#include "fixed-point.h"

int F = 1<<14;

fpoint convert_n_to_f (int n)
{
    return n * F;
}

int convert_x_to_int_down (fpoint x)
{
    return x / F;
}

int convert_x_to_int_near (fpoint x)
{
    if (x >= 0)
    {
        return (x + (F/2))/F;
    } else
    {
        return (x - (F/2))/F;
    }
}

fpoint add_x_y (fpoint x, fpoint y)
{
    return x + y;
}

fpoint sub_x_y (fpoint x, fpoint y)
{
    return x - y;
}

fpoint add_x_n (fpoint x, int n)
{
    return x + convert_n_to_f (n);
}

fpoint sub_x_n (fpoint x, int n)
{
    return x - convert_n_to_f (n);
}

fpoint mult_x_y (fpoint x, fpoint y)
{
    return (((int64_t)x) * y)/F;
}

fpoint mult_x_n (fpoint x, int n)
{
    return x * n;
}

fpoint div_x_y (fpoint x, fpoint y)
{
    return ((int64_t)x) * F/y;
}

fpoint div_x_n (fpoint x, int n)
{
    return x / n;
}