#include <stdio.h>

int main()
{
    char name[100];
    printf("Enter a sentence: ");
    fgets(name, 100, stdin);

    name[0] = name[0] >= 'a' && name[0] <= 'z' ? name[0] - 32 : name[0];

    int i;
    for (i = 0; name[i] != '\0'; i++)
    {
        printf("%c", name[i]);
    }

    // fputs(name, stdout);
    return 0;
}