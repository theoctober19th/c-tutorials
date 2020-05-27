#include <stdio.h>

long factorial(int n)
{
    int i;
    long result = 1;
    for (i = 1; i <= n; i++)
    {
        result = result * i;
    }

    return result;
}

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("%d ! = %ld\n", num, factorial(num));
    return 0;
}