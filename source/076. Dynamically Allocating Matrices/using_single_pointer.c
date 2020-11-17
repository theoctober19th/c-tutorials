#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *matrix;
    int m, n, i, j;
    printf("Enter the values of m and n: ");
    scanf("%d%d", &m, &n);

    // matrix = (int **)malloc(m * sizeof(int *));
    matrix = (int *)malloc(m * n * sizeof(int));

    if (matrix == NULL)
    {
        printf("Allocation failed!!");
        exit(1);
    }

    //taking input from user
    printf("Enter the elements of matrix:\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &matrix[n * i + j]);
        }
    }

    //printing matrix
    printf("You entered the matrix: \n");
    printf("Enter the elements of matrix:\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d\t", matrix[n * i + j]);
        }
        printf("\n");
    }

    if (matrix != NULL)
    {
        free(matrix);
    }

    return 0;
}