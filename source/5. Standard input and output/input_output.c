#include <stdio.h>

int main()
{

    char my_char;

    int number1, number2;

    scanf("%c%d-%d", &my_char, &number1, &number2);

    printf("MyChar = %c \nNumber1 = %10d \nNumber2 = %d", my_char, number1, number2);

    return 0;
}