#include <stdio.h>

int main()
{

    //int array[3][3][8]; this is how 3d array is declared
    //array[0][0][0]

    float matA[2][2];
    float matB[2][2];
    float matC[2][2] = {
        {0, 0},
        {0, 0}};

    printf("Enter matrix A:\n");

    int i, j;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            scanf("%f", &matA[i][j]);
        }
    }

    printf("Enter matrix B:\n");

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            scanf("%f", &matB[i][j]);
        }
    }

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            matC[i][j] = matA[i][j] + matB[i][j];
        }
    }

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%f\t", matC[i][j]);
        }
        printf("\n");
    }

    return 0;
}