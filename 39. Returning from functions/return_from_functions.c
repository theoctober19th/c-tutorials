#include <stdio.h>
#include <stdlib.h>
int square(int x)
{
    exit(0);
    return x * x;
    printf("hello");
}

void function(int n)
{
    if (n == 0)
    {
        return;
    }
    printf("The number is not zero.");
}

int main()
{
    // int squareresult = square(10);
    printf("square = %d", square(square(10)));
    return 0;
    printf("hi");
    // function(1);
    // return 0;
}