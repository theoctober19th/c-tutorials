#include <stdio.h>

int largest(int[], int);

int main()
{
    int numbers[] = {5, 6, 8, 98, 45, 234, 65, 777};
    int size = (int)(sizeof(numbers) / sizeof(numbers[0]));

    int maxnumber = largest(numbers, size);
    printf("The largest number is: %d\n", maxnumber);
    return 0;
}

int largest(int array[], int n)
{
    int i;
    int max = array[0];
    for (i = 0; i < n; i++)
    {
        if (array[i] > max)
        {
            max = array[i];
        }
    }
    return max;
}