#include <stdio.h>

void find_maximum_minimum(int arr[], int n, int *max, int *min)
{
    *max = arr[0];
    *min = arr[0];
    int i;
    for (i = 0; i < n; i++)
    {
        if (arr[i] > *max)
        {
            *max = arr[i];
        }
        if (arr[i] < *min)
        {
            *min = arr[i];
        }
    }
}

int main()
{
    int arr[] = {5, 6, 7, 2, 4, 1, 22};
    int max, min;

    find_maximum_minimum(arr, (int)sizeof(arr) / sizeof(arr[0]), &max, &min);

    printf("Maximum = %d, minimum = %d\n", max, min);
    return 0;
}