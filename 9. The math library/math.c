#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    printf("abs(-23) = %d \n", abs(-23));
    printf("fmax(23, 67.2) = %f \n", fmax(23, 67.2));
    printf("fmin(23, 67.2) = %f \n", fmin(23, 67.2));
    printf("exp(2) = %f \n", exp(2));
    printf("log(34) = %f \n", log(34));
    printf("sqrt(144) = %f \n", sqrt(144));
    printf("cbrt(27) = %f \n", cbrt(27));
    printf("pow(4, 5) = %f \n", pow(4, 5));
    printf("sin(2.3) = %f \n", sin(2.3));
    printf("asin(0) = %f \n", asin(0));
    printf("ceil(2.3) = %f \n", ceil(2.3));
    printf("floor(2.3) = %f \n", floor(2.3));
    printf("round(3.6) = %f \n", round(3.6));
    printf("truncate(3.6) = %f \n", trunc(3.6));

    return 0;
}