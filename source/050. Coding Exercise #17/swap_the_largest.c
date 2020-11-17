#include <stdio.h>

void swap(int *a, int *b);
int *mid(int arr[], int n);
int *largest(int arr[], int n);

int main()
{
    int array[] = {7, 5, 12, 1, 27};
    int *maxptr, *midptr;
    maxptr = largest(array, (int)sizeof(array) / sizeof(array[0]));
    midptr = mid(array, (int)sizeof(array) / sizeof(array[0]));
    swap(maxptr, midptr);

    printf("After swapping: \n");
    int i;
    for (i = 0; i < (int)sizeof(array) / sizeof(array[0]); i++)
    {
        printf("%d ", array[i]);
    }

    return 0;
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int *mid(int arr[], int n)
{
    int midpos = n / 2;
    return &arr[midpos];
}

int *largest(int arr[], int n)
{
    int i;
    int *max = &arr[0];
    for (i = 0; i < n; i++)
    {
        if (*max < arr[i])
        {
            max = &arr[i];
        }
    }
    return max;
}
