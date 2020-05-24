//Programming
//rogrammin
//ogrammi
//gramm
//ram
//a
#include <stdio.h>
#include <string.h>
int main()
{

    char str[] = "Programming";
    int n = strlen(str);
    int i, j;
    for (i = 0; i <= n / 2; i++)
    {
        for (j = i; j < n - i; j++)
        {
            printf("%c", str[j]);
        }
        printf("\n");
    }
    return 0;
}