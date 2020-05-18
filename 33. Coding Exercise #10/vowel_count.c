#include <stdio.h>

int main()
{

    char str[100];
    printf("Enter a string: ");
    gets(str);

    int i;
    int count = 0;
    for (i = 0; str[i] != '\0'; i++)
    {
        //str[i]
        if (str[i] == 'a' || str[i] == 'A' || str[i] == 'e' || str[i] == 'E' || str[i] == 'i' || str[i] == 'I' || str[i] == 'o' || str[i] == 'O' || str[i] == 'u' || str[i] == 'U')
        {
            count++;
        }
    }

    printf("The number of vowels in given string are: %d\n", count);
    return 0;
}