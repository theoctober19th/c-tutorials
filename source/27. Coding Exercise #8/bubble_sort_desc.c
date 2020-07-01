#include <stdio.h>

int main()
{

    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    float numbers[n];

    int i, j;

    printf("Enter an array of %d integers: ", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%f", &numbers[i]);
    }

    for (i = 0; i < n - 1; i++)
    {

        for (j = 0; j < n - 1 - i; j++)
        {

            //check for incorrect order
            if (numbers[j] < numbers[j + 1])
            {
                //swap the numbers
                float temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }

    printf("Sorted array: ");
    for (i = 0; i < n; i++)
    {
        printf("%.3f ", numbers[i]);
    }

    printf("\n");

    return 0;
}