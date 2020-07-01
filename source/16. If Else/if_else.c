#include <stdio.h>

int main()
{

    char letter;
    printf("enter a character: ");
    letter = getchar();

    if (letter >= '0' && letter <= '9')
    {

        if (letter >= '5')
        {
            printf("Digit greater or equal to 5\n");
        }
        else
        {
            printf("Digit less than 5\n");
        }
    }
    else if (letter >= 'a' && letter <= 'z' || letter >= 'A' && letter <= 'Z')
    {
        printf("Alphabet\n");
    }
    else
    {
        printf("Special Symbol \n");
    }

    return 0;
}