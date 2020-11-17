#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m, n, i, j;
    printf("Enter the dimensions of the matrix: ");
    scanf("%d%d", &m, &n);

    int **matrix;

    matrix = malloc(m * sizeof(int *));
    if (matrix == NULL)
    {
        printf("Allocation failed!\n");
        exit(1);
    }
    for (i = 0; i < m; i++)
    {
        matrix[i] = malloc(n * sizeof(int));
        if (matrix[i] == NULL)
        {
            printf("Allocation failed!\n");
            exit(1);
        }
    }

    printf("Enter the elements of the matrix: ");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    int count = 0;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (!matrix[i][j])
            {
                count++;
            }
        }
    }

    printf("There are %d zeroes in the matrix.\n", count);

    for (i = 0; i < m; i++)
    {
        if (matrix[i] != NULL)
        {
            free(matrix[i]);
        }
    }

    if (matrix != NULL)
    {
        free(matrix);
    }

    return 0;
}