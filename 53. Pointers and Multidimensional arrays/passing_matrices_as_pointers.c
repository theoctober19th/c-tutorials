#include <stdio.h>
#define ROWS 3
#define COLS 3

void matrix_add(int matA[ROWS][COLS], int matB[ROWS][COLS], int matC[ROWS][COLS])
{
    int i, j;
    for (i = 0; i < ROWS; i++)
    {
        for (j = 0; j < COLS; j++)
        {
            *(*(matC + i) + j) = *(*(matA + i) + j) + *(*(matB + i) + j);
        }
    }
}

void print_matrix(int matrix[ROWS][COLS])
{
    int i, j;
    for (i = 0; i < ROWS; i++)
    {
        for (j = 0; j < COLS; j++)
        {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int matrixA[3][3] = {
        {7, 8, 9},
        {4, 5, 6},
        {10, 11, 12}};
    int matrixB[3][3] = {
        {3, 2, 0},
        {6, 8, 9},
        {5, 4, 3}};
    int matrixRes[3][3];

    //add matrixA with matrixB, and store the result in matrixRes
    matrix_add(matrixA, matrixB, matrixRes);

    //print the matrix
    print_matrix(matrixRes);
    return 0;
}