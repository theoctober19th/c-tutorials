#include <stdio.h>
#include <stdlib.h>

double sum(double *arr, int n)
{
    int i;
    double s = 0;
    for (i = 0; i < n; i++)
    {
        s = s + arr[i];
    }
    return s;
}

int main()
{
    double *array;
    int n;
    printf("Enter how many numbers do you want. ");
    scanf("%d", &n);

    array = (double *)malloc(n * sizeof(double));
    if (array == NULL)
    {
        printf("Allocation Failed!\n");
        exit(1);
    }
    printf("Enter %d numbers: ", n);

    int i;
    for (i = 0; i < n; i++)
    {
        scanf("%lf", &array[i]);
    }

    printf("The sum of numbers in the array is: %lf\n", sum(array, n));

    if (array != NULL)
    {
        free(array);
    }
    return 0;
}