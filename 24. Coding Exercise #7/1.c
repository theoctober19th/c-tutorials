//1 + 11 + 111 + ...
#include <stdio.h>

int main()
{

    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    int term = 1;
    int i;
    int sum = 0;

    for (i = 1; i <= n; i++)
    {
        sum = sum + term;
        term = term * 10 + 1;
    }

    printf("The sum of series is %d.\n", sum);

    return 0;
}