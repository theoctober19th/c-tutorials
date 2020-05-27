#include <stdio.h>

double power(double x, int n)
{
    int i;
    double product = 1;
    for (i = 1; i <= n; i++)
    {
        product = product * x;
    }
    return product;
}

long factorial(int n)
{
    int i;
    long result = 1;
    for (i = 1; i <= n; i++)
    {
        result = result * i;
    }

    return result;
}

double sine(double x, int n)
{
    int i;
    double sum = 0.0;
    int sign = 1;
    for (i = 1; i <= n; i++)
    {
        double term = sign * power(x, 2 * i - 1) / factorial(2 * i - 1);
        sign = sign * -1;
        sum = sum + term;
    }
    return sum;
}

double cosine(double x, int n)
{
    int i;
    double sum = 0.0;
    int sign = 1;
    for (i = 1; i <= n; i++)
    {
        double term = sign * power(x, 2 * (i - 1)) / factorial(2 * (i - 1));
        sign = sign * -1;
        sum = sum + term;
    }
    return sum;
}

int main()
{
    double x;
    int n;
    printf("Enter the values of x and n: ");
    scanf("%lf %d", &x, &n);

    printf("Sine of %.3lf is: %.3lf\n", x, sine(x, n));
    printf("Cosine of %.3lf is: %.3lf\n", x, cosine(x, n));
    return 0;
}