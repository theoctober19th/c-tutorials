#include <stdio.h>
int main()
{

    int numbers[5] = {1, 2, 3, 4, 5};

    int i, j;
    for (i = 0; i < 5; i++)
    {

        for (j = 0; j < 10; j++)
        {
            printf("%d ", numbers[i]);
        }

        printf("\n");
    }
    return 0;
}