#include <stdio.h>
#include <stdlib.h>

void print(int *array, int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
}

int main()
{
    int n, i, m;
    printf("Enter the number of integers: ");
    scanf("%d", &n);

    int *arr = malloc(n * sizeof(int));
    if (arr == NULL)
    {
        printf("Initial allocation failed!\n");
        exit(1);
    }

    printf("Enter %d integers: ", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Initially, the array contains: ");
    print(arr, n);

    printf("How many extra integers do you want to store? ");
    scanf("%d", &m);

    int *temp = realloc(arr, (n + m) * sizeof(int));
    if (temp == NULL)
    {
        printf("Reallocation failed!\n");
        free(arr);
        exit(2);
    }

    arr = temp;

    printf("Enter %d more integers: ", m);
    for (i = n; i < n + m; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("After reallocation, the array contains: ");
    print(arr, n + m);

    if (arr != NULL)
    {
        free(arr);
    }

    return 0;
}