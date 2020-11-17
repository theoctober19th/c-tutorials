#include <stdio.h>
#include <stdlib.h>

int length(char *str)
{
    int i;
    for (i = 0; str[i] != '\0'; i++)
        ;
    return i;
}

char *join(char *str1, char *str2)
{
    int n1 = length(str1);
    int n2 = length(str2);

    char *newstr = malloc((n1 + n2 + 1) * sizeof(char));
    int i, j;
    for (i = 0; i < n1; i++)
    {
        newstr[i] = str1[i];
    }
    for (j = 0; j < n2; j++, i++)
    {
        newstr[i] = str2[j];
    }
    newstr[i] = '\0';
    return newstr;
}

int main()
{
    char *str1 = "Bikalpa";
    char *str2 = "Codes";

    char *res = join(str1, str2);

    puts(res);

    if (res != NULL)
    {
        free(res);
    }
    return 0;
}