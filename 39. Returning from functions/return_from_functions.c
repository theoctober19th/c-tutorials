#include <stdio.h>
#include <stdlib.h>
int square(int x)
{
    // exit(0); //doing this will immediately end the program
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
    printf("square = %d", square(square(10)));
    return 0;
    printf("hi"); //this line will never get executed
    // function(1);
    // return 0;
}