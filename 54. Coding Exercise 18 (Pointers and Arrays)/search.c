#include <stdio.h>

int contains(int *arr, int n, int num)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (num == *(arr + i))
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    int array[] = {3, 4, 5, 6, 7};

    int doesExist = contains(array, sizeof(array) / sizeof(array[0]), 10);
    if (doesExist)
    {
        printf("The num exists.\n");
    }
    else
    {
        printf("The num doesn't exist.\n");
    }
    return 0;
}