#include <stdio.h>

int main()
{

    int array[2][2] = {
        {1, 0},
        {0, 1}};

    int determinant = array[0][0] * array[1][1] - array[0][1] * array[1][0];

    int i, j;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%d\t", array[i][j]);
        }
        printf("\n");
    }

    printf("Determinant = %d\n", determinant);

    // array[2][0]

    return 0;
}