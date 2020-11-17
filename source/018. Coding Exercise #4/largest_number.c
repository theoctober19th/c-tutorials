#include <stdio.h>

int main()
{

    int a, b, c;

    printf("Enter three numbers: ");

    scanf("%d %d %d", &a, &b, &c);

    printf("The largest number is ");

    if (a >= b && a >= c)
    {
        printf("%d.\n", a);
    }
    else if (b >= a && b >= c)
    {
        printf("%d.\n", b);
    }
    else
    {
        printf("%d.\n", c);
    }

    return 0;
}