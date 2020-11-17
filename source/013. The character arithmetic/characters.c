#include <stdio.h>

int main()
{

    printf("enter a character: ");
    char letter = getchar();

    // 0 '0'

    // letter = letter + 1;

    printf("ascii value = %d, character = %c \n", letter, letter);

    letter >= 'A' && letter <= 'Z' ? printf("capital\n") : printf("small\n");

    putchar(letter);
    return 0;
}