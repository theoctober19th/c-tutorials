#include <stdio.h>

int is_odd(int n)
{
    return n % 2 == 1;
}

void print_collatz_starting_from(int n)
{
    //write the definition here
    while (n != 1)
    {
        printf("%d ", n);

        //check if n is odd or even
        if (is_odd(n))
        {
            //the number n is odd
            n = 3 * n + 1;
        }
        else
        {
            //the number is even
            n = n / 2;
        }
    }
    printf("%d\n", 1);
}

int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    print_collatz_starting_from(n);
    return 0;
}