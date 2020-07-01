#include <stdio.h>

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

    printf("matrixA = %p\n", matrixA);
    printf("pointer to 1st row (&matrixA[0]) = %p\n\n", &matrixA[0]);

    printf("matrixA + 1 = %p\n", matrixA + 1);
    printf("pointer to 2nd row (&matrixA[1]) = %p\n\n", &matrixA[1]);

    printf("*(matrixA + 1) = %p\n", *(matrixA + 1));
    printf("pointer to 2nd row, 1st column = %p\n\n", &matrixA[1][0]);

    printf("*(matrixA + 1) + 1 = %p\n", *(matrixA + 1) + 1);
    printf("pointer to 2nd row, 2nd column = %p\n\n", &matrixA[1][1]);

    printf("matrix[1][1] = %d\n", matrixA[1][1]);
    printf("Element at 2nd row, 2nd column = %d\n\n", *(*(matrixA + 1) + 1));

    return 0;
}