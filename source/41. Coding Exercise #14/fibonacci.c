#include <stdio.h>

void print_fibonacci(int n)
{
    int i;
    int a = 0;
    int b = 1;
    printf("The first %d fibonacci numbers are: ", n);
    for (i = 0; i < n; i++)
    {
        printf("%d ", a);
        int c = a + b;
        a = b;
        b = c;
    }
    printf("\n");
}
int main()
{
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    print_fibonacci(n);
    return 0;
}