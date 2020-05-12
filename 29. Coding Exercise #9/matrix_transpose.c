#include <stdio.h>

int main()
{

    int m, n;
    printf("Enter the dimensions of matrix (m,n): ");
    scanf("%d%d", &m, &n);

    int matrix[m][n];
    int result[m][n];

    printf("Enter a %dx%d matrix: \n", m, n);
    int i, j;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            result[i][j] = matrix[j][i];
        }
    }

    printf("The transpose of given matrix is: \n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d\t", result[i][j]);
        }
        printf("\n");
    }
    return 0;
}