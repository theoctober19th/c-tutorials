#include <stdio.h>
#define ROWS 3
#define COLUMNS 3

int diagonal_sum(int matrix[ROWS][COLUMNS])
{
    int i, j;
    int sum = 0;
    for (i = 0; i < ROWS; i++)
    {
        for (j = 0; j < COLUMNS; j++)
        {
            if (i == j)
            {
                sum = sum + matrix[i][j];
            }
        }
    }
    return sum;
}

int main()
{
    int mat[3][3] = {
        {1, 2, 3},
        {1, 2, 3},
        {1, 2, 3}};

    printf("Diagonal sum = %d\n", diagonal_sum(mat));

    return 0;
}