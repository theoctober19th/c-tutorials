// 1*10 + 3*20 + 6*30 + ...
#include <stdio.h>

int main()
{

    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    int sum = 0;
    int i;

    for (i = 1; i <= n; i++)
    {
        int term = ((i * (i + 1)) / 2) * 10 * i;
        sum = sum + term;
    }

    printf("Sum = %d\n", sum);
    return 0;
}