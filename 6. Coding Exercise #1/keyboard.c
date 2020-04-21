#include <stdio.h>

int main()
{

    char characterEntered;
    printf("Please enter a character: ");
    scanf(" %c", &characterEntered);

    printf("Hello, you pressed the character: %c \n", characterEntered);

    return 0;
}