#include <stdio.h>

int sum(const int arr[], int n)
{
    int i;
    int result = 0;
    for (i = 0; i < n; i++)
    {
        result = result + arr[i];
    }
    return result;
}

int main()
{
    int numbers[] = {1, 2, 3, 45, 5, 7};

    int res = sum(numbers, (int)(sizeof(numbers) / sizeof(numbers[0])));
    printf("Sum = %d\n", res);

    printf("numbers[0] = %d\n", numbers[0]);

    return 0;
}