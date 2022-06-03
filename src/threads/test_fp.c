#include "fixed-point.h"
#include <stdio.h>
int main()
{
    struct real_number n = {59,60};
    struct real_number l = {59,60};
    struct real_number q = {2,4};
    struct real_number r = {3,4};
    f_point fp = convert_rn_to_fp(n);
    f_point fp2 = convert_rn_to_fp(l);
    f_point fp1 = convert_int_to_fp(0);
    printf("FP = %d\n", (int)mult_fp(fp, fp2)); //multiplying test
    printf("0 FP = %d\n", (int)fp1); //testing with 0
    f_point fp4 = 104635;
    printf("Convert 104635 to fp = %d\n", fp4);
    printf("Convert fp to 680 = %d\n", convert_fp_to_int_to_near (100 * fp4));
    int cnt = 0;
    f_point fp3 = 0;
    while (cnt < 100)
    {
        fp3 = add_fp_and_n(fp3, 1);
        cnt++;
    }
    f_point fp5 = convert_int_to_fp (1);
    printf("Expected = 1638400 - Actual = %d\n", fp3); //testing addition
    printf("Multiplication test | Expected = 1638400 - Actual = %d\n", 100 * fp5);
    printf("Division test | Expected  = 10922 - Actual = %d\n", div_fp(convert_rn_to_fp(q), convert_rn_to_fp(r)));
    int new_n = convert_fp_to_int_to_near(fp);
    printf("INT = %d\n", new_n);
    new_n = convert_fp_to_int_to_zero(fp);
    printf("INT = %d\n", new_n);
    return 0;
}