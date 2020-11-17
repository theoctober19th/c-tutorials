#include <stdio.h>

void print_result(int n);
void print_error(char *str);
void divide(int a, int b, void (*on_success)(int), void (*on_failure)(char *));

int main()
{

    divide(50, 0, print_result, print_error);
    return 0;
}

void print_result(int n)
{
    printf("The division result is: %d\n", n);
}

void print_error(char *str)
{
    puts(str);
}

void divide(int a, int b, void (*on_success)(int), void (*on_failure)(char *))
{
    if (b == 0)
    {
        on_failure("Division by zero!!!");
    }
    else
    {
        int c = a / b;
        on_success(c);
    }
}