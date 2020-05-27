#include <stdio.h>

int is_prime(int n);

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (is_prime(num))
    {
        printf("The given number is prime number.\n");
    }
    else
    {
        printf("The given number is not a prime number.\n");
    }
    return 0;
}

int is_prime(int n)
{
    //definition
    int i;
    for (i = 2; i <= n - 1; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}