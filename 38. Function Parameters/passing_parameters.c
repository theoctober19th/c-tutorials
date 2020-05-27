#include <stdio.h>
#include <math.h>

void print_pattern(int);

void print_square(int n)
{
    printf("Square = %d\n", n * n);
    n = 0;
}

void print_power(double a, int b)
{
    printf("a to the power b = %f\n", pow(a, b));
}

int main()
{
    int n = 10;
    // print_square(45);
    // print_square(n);
    // print_square(n);
    // print_power(n, 1.5);
    print_pattern(n);
    return 0;
}

void print_pattern(int n)
{
    int i, j;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}