#include <stdio.h>

int is_prime(int);
void print_primes_less_than(int);

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    print_primes_less_than(num);
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

void print_primes_less_than(int n)
{
    int i;
    printf("The prime numbers less than %d are: ", n);
    for (i = 2; i < n; i++)
    {
        if (is_prime(i))
        {
            printf("%d ", i);
        }
    }
    printf("\n");
}