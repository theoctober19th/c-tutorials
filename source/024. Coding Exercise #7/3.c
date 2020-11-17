// 1/x - 2/x^2 + 3/x^3 - ...

#include <stdio.h>
#include <math.h>

int main()
{

    int n = 10;
    float x;
    printf("Enter the value of x: ");
    scanf("%f", &x);

    int sign = 1;
    int i;
    float sum = 0.0;

    for (i = 1; i <= n; i++)
    {

        float term = sign * (i / pow(x, i));
        sum = sum + term;
        sign = sign * -1;
    }

    printf("Sum = %.3f\n", sum);

    return 0;
}