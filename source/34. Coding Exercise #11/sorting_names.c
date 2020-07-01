#include <stdio.h>
#include <string.h>
int main()
{

    int n;
    printf("Enter the number of names: ");
    scanf("%d", &n);

    char names[50][100];

    int i, j;
    printf("Enter %d names: \n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%100s", names[i]);
    }

    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - 1 - i; j++)
        {
            //check if the pair are in out of order
            if (strcmp(names[j], names[j + 1]) > 0)
            {
                //swap

                char temp[100];
                strcpy(temp, names[j]);
                strcpy(names[j], names[j + 1]);
                strcpy(names[j + 1], temp);
            }
        }
    }

    printf("The sorted names are: \n");
    for (i = 0; i < n; i++)
    {
        puts(names[i]);
    }

    return 0;
}