#include <stdio.h>

int main()
{
    int m, n;
    printf("Enter two numbers: ");
    scanf("%d%d", &m, &n);

    while (n != 0)
    {
        int remainder = m % n;
        m = n;
        n = remainder;
    }

    printf("GCD = %d\n", m);
    return 0;
}