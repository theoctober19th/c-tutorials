#include <stdio.h>
int main()
{
    int n = 5;
    int numbers[] = {7, 9, 2, 4, 1};

    int i, j;

    for (i = 0; i < n - 1; i++)
    {

        for (j = 0; j < n - i - 1; j++)
        {

            //if the numbers are in wrong order
            if (numbers[j] > numbers[j + 1])
            {
                //swap the numbers

                int temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }

    for (i = 0; i < n; i++)
    {
        printf("%d ", numbers[i]);
    }
    return 0;
}