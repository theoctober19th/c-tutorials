#include <stdio.h>

int main()
{

    int matA[10][10];
    int matB[10][10];
    int matC[10][10];

    int m1, n1, m2, n2;

    printf("Enter the dimensions of matrix A (m1, n1): ");
    scanf("%d%d", &m1, &n1);

    printf("Enter the dimension of matrix B (m2, n2): ");
    scanf("%d%d", &m2, &n2);

    if (n1 != m2)
    {
        printf("Multiplication of matrices A and B is not possible.\n");
        return 0;
    }

    int i, j, k;
    //take input matrix A
    printf("Enter the matrix A:\n");
    for (i = 0; i < m1; i++)
    {
        for (j = 0; j < n1; j++)
        {
            scanf("%d", &matA[i][j]);
        }
    }

    //take input matrix B
    printf("Enter the matrix B:\n");
    for (i = 0; i < m2; i++)
    {
        for (j = 0; j < n2; j++)
        {
            scanf("%d", &matB[i][j]);
        }
    }

    //multiply
    for (i = 0; i < m1; i++)
    {
        for (j = 0; j < n2; j++)
        {

            int sum = 0;
            for (k = 0; k < n1; k++)
            {
                sum += matA[i][k] * matB[k][j];
            }

            matC[i][j] = sum;
        }
    }

    printf("The product of matrices, A x B = \n");
    for (i = 0; i < m1; i++)
    {
        for (j = 0; j < n2; j++)
        {
            printf("%d\t", matC[i][j]);
        }
        printf("\n");
    }

    return 0;
}