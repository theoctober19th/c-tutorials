#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int numbers[n];

    printf("Enter an array of %d integers: ", n);

    int i;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &numbers[i]);
    }

    for (i = 0; i < n; i++)
    {

        int num = numbers[i];

        //check if num is prime
        int is_prime = 1;

        int j;
        for (j = 2; j <= num - 1; j++)
        {
            if (num % j == 0)
            {
                is_prime = 0;
                break;
            }
        }

        if (is_prime)
        {
            printf("%d ", num);
        }
    }

    printf("\n");

    return 0;
}