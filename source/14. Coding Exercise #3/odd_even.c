#include <stdio.h>

int main()
{

    int number;
    printf("Enter an integer: ");
    scanf("%d", &number);

    printf("The integer is ");

    number & 1 ? printf("odd.\n") : printf("even.\n");

    return 0;
}