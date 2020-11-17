#include <stdio.h>

int main()
{
    int num = 45;
    printf("Size of int: %d\n", (int)sizeof(num));       // prints 4
    printf("Size of double: %d\n", (int)sizeof(double)); // prints 8

    //declaring an integer pointer
    int *ptr;

    //pointing ptr to num (storing address of num in ptr)
    ptr = &num;

    printf("Address of num = %d\n", ptr); //output maybe different everytime we run it

    //using * operator to fetch value pointed by ptr
    int foo = *ptr;

    //printing value of foo
    printf("Foo = %d\n", foo); //prints 45

    //modifying data using pointer
    *ptr = 999;
    printf("Foo = %d\n", num); //prints 999
}