#include <stdio.h>

void print_pattern_a();
void print_pattern_b();

int main()
{
    print_pattern_a();
    print_pattern_b();
    return 0;
}

void print_pattern_a()
{
    int i, j;

    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

void print_pattern_b()
{
    int i, j;

    for (i = 1; i <= 5; i++)
    {
        for (j = 5; j >= i; j--)
        {
            printf("*");
        }
        printf("\n");
    }
}