#include <stdio.h>
#define ROWS 3
#define COLUMNS 3

void multiply(int matA[ROWS][COLUMNS], int matB[ROWS][COLUMNS])
{
    int i, j, k;
    printf("The product is: \n");
    for (i = 0; i < ROWS; i++)
    {
        for (j = 0; j < COLUMNS; j++)
        {
            int sum = 0;
            for (k = 0; k < COLUMNS; k++)
            {
                sum = sum + matA[i][k] * matB[k][j];
            }
            printf("%d\t", sum);
        }
        printf("\n");
    }
}

int main()
{
    int mat1[ROWS][COLUMNS] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};
    int mat2[ROWS][COLUMNS] = {
        {1, 0, 0},
        {0, 1, 0},
        {0, 0, 1}};

    multiply(mat1, mat2);
    return 0;
}