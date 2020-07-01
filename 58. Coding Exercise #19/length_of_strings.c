#include <stdio.h>
#include <string.h>

void print_length(char **strs, int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        //strs[i]  *(strs + i)
        puts(*(strs + i));
        printf("Length = %d\n\n", strlen(*(strs + i)));
    }
}

int main()
{
    char *mottos[] = {
        "The north remembers",
        "Ours is the fury",
        "What is dead shall never die"};

    print_length(mottos, sizeof(mottos) / sizeof(mottos[0]));
    return 0;
}