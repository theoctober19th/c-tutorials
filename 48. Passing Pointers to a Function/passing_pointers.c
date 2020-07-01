#include <stdio.h>

void print_square(int *x)
{
    printf("The square is: %d\n", (*x) * (*x));

    *x = 500;

    // x
}

int main()
{
    int n = 5;
    print_square(&n);

    printf("The value of n is: %d\n", n);

    return 0;
}