#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int numbers[n];

    printf("Enter an array of %d elements: ", n);

    int i, j;

    //taking input
    for (i = 0; i < n; i++)
    {
        scanf("%d", &numbers[i]);
    }

    //selection sort algorithm
    for (i = 0; i < n; i++)
    {

        int min_index = i;

        for (j = i + 1; j < n; j++)
        {

            //check for the minimum value
            if (numbers[j] < numbers[min_index])
            {
                min_index = j;
            }
        }

        //check if swap is needed
        if (min_index != i)
        {
            int temp = numbers[i];
            numbers[i] = numbers[min_index];
            numbers[min_index] = temp;
        }
    }

    printf("Sorted array: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", numbers[i]);
    }

    printf("\n");

    return 0;
}