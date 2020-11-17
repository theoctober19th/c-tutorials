#include <stdio.h>

int length(char str[])
{
    int i;
    int count = 0;
    for (i = 0; str[i] != '\0'; i++)
    {
        count = count + 1;
    }

    return count;
}

int main()
{

    char name[] = "Bikala Codes";
    printf("Length of string = %d\n", length(name));

    return 0;
}