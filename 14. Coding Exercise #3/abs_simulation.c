#include <stdio.h>

int main()
{

    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    printf("Absolute value of %d is ", number);

    number < 0 ? printf("%d\n", -1 * number) : printf("%d\n", number);

    return 0;
}