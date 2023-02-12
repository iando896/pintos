#include "fixed-point.h"
#include <stdio.h>
int main()
{
    printf ("--TESTING CONVERSION--\n\n");

    fpoint x = convert_n_to_f (15);
    fpoint y = convert_n_to_f (59)/60;

    printf ("Convert (15) = %d | Exp = 245,760\n", x);
    printf ("Convert back to 15 down = %d | Exp = 15\n", convert_x_to_int_down (x));
    printf ("Convert back to 15 near = %d | Exp = 15\n\n", convert_x_to_int_near (x));
    
    printf ("Convert (59/60) = %d | Exp = 16110\n", y);
    printf ("Convert back to 59/60 down = %d | Exp = 0\n", convert_x_to_int_down (y));
    printf ("Convert back to 59/60 = %d | Exp = 1\n\n", convert_x_to_int_near (y));

    printf ("--TESTING ADD AND SUB--\n\n");

    printf ("Add x and y = %d | Exp = 261,870\n", add_x_y (x, y));
    printf ("Sub x and y = %d | Exp = 229,650\n", sub_x_y (x, y));
    fpoint z = add_x_n (x, 5);
    fpoint t = sub_x_n (x, 5);

    printf ("Add x and 5 = %d | Exp = 327,680\n", z);
    printf ("Convert back to x+5 down = %d | Exp = 20\n", convert_x_to_int_down (z));
    printf ("Convert back to x+5 near = %d | Exp = 20\n\n", convert_x_to_int_near (z));
    
    printf ("Sub x and 5 = %d | Exp = 163,840\n", t);
    printf ("Convert back to x-5 down = %d | Exp = 10\n", convert_x_to_int_down (t));
    printf ("Convert back to x-5 near = %d | Exp = 10\n\n", convert_x_to_int_near (t));

    printf ("--TESTING MULT AND DIV--\n\n");
    printf ("Mult x and y = %d | Exp = \n", mult_x_y (x, y));
    printf ("Div x and y = %d | Exp = \n\n", div_x_y (x, y));
    
    printf ("Mult x and 5 = %d | Exp = 1,228,800\n", mult_x_n (x, 5));
    printf ("Div x and 5 = %d | Exp = 49,152\n", div_x_n (x, 5));
    printf ("Convert back to x*5 down = %d | Exp = 75\n", convert_x_to_int_down (mult_x_n (x, 5)));
    printf ("Convert back to x-5 near = %d | Exp = 3\n\n", convert_x_to_int_near (div_x_n (x, 5)));
    return 0;
}