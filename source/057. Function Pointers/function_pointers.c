#include <stdio.h>

void print_sum(int a, int b)
{
    printf("Sum = %d\n", a + b);
}

void print_product(int a, int b)
{
    printf("Product = %d\n", a * b);
}

void doSomething(int a, int b, void (*fun)(int, int))
{
    fun(a, b);
}

int main()
{

    void (*fptr)(int, int);
    fptr = print_product;

    // fptr(50, 50);
    doSomething(50, 50, print_product);

    return 0;
}
