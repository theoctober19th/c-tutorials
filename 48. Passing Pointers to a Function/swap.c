#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int m = 30, n = 20;
    printf("before swapping: m = %d, n = %d\n", m, n);

    swap(&m, &n);

    printf("After swapping: m = %d, n = %d\n", m, n);
    return 0;
}