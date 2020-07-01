#include <stdio.h>

int main()
{

    float number, sum = 0, average;
    int count = 0;

    while (1)
    {

        printf("Enter a number: ");
        scanf("%f", &number);

        if (number == 0)
        {
            break;
        }

        sum = sum + number;
        count = count + 1;
    }

    average = sum / count;

    printf("Sum = %.3f, Average = %.3f\n", sum, average);

    return 0;
}