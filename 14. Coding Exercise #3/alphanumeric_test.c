#include <stdio.h>

int main()
{

    char character;

    printf("Enter a character: ");
    character = getchar();

    int isNumber = character >= '0' && character <= '9';
    int isCapital = character >= 'A' && character <= 'Z';
    int isSmall = character >= 'a' && character <= 'z';

    printf("The character is ");

    isNumber || isCapital || isSmall ? printf("alphanumeric.\n") : printf("not alphanumeric.\n");

    return 0;
}