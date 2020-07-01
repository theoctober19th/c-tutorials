#include <stdio.h>

void reverse(char *str)
{
    int i, n;
    for (n = 0; *(str + n) != '\0'; n++)
        ;

    for (i = 0; i < n - 1 - i; i++)
    {
        //swap characters at indices i and n-1-i
        char temp = *(str + i);
        *(str + i) = *(str + n - 1 - i);
        *(str + n - 1 - i) = temp;
    }
}

int main()
{
    char name[] = "Bikalpa";
    reverse(name);
    printf("The reverse string is: ");
    puts(name);
    return 0;
}