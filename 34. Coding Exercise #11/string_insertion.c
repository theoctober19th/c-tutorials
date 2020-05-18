#include <stdio.h>

int main()
{

    char container[100];
    char str[100];
    char result[200];

    int pos;
    printf("Enter a container string: ");
    gets(container);
    printf("Enter the string to be inserted: ");
    gets(str);
    printf("Enter the position of insertion: ");
    scanf("%d", &pos);

    int i, j, k = 0;
    for (i = 0; i < pos; i++, k++)
    {
        result[k] = container[i];
    }

    for (j = 0; str[j] != '\0'; j++)
    {
        result[k] = str[j];
        k++;
    }

    for (i = pos; container[i] != '\0'; i++)
    {
        result[k] = container[i];
        k++;
    }

    result[k] = '\0';

    printf("The resulting string is: ");
    puts(result);

    return 0;
}