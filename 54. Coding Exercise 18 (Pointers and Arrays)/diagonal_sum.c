#include <stdio.h>
#define ROWS 3
#define COLS 3

int diagonal_sum(int matrix[ROWS][COLS])
{
    int i;
    int sum = 0;
    for (i = 0; i < ROWS; i++)
    {
        // sum += matrix[i][i];
        sum += *(*(matrix + i) + i);
    }
    return sum;
}

int main()
{
    int mat[ROWS][COLS] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};
    int dg_sum = diagonal_sum(mat);
    printf("The sum of diagonal elements is: %d\n", dg_sum);
    return 0;
}