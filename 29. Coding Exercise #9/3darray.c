#include <stdio.h>

int main()
{

    int matrices[2][3][4] = {
        {{1, 0, -1, 4},
         {2, 8, 11, -2},
         {4, 5, 0, 0}},
        {{-1, 10, 1, 3},
         {5, 5, 5, 5},
         {14, 5, 0, 1}}};

    int result[3][4];
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            result[i][j] = matrices[0][i][j] + matrices[1][i][j];
        }
    }

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("%d\t", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}