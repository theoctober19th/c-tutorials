#include <stdio.h>
#include <stdlib.h>

//global variables
int uninitialized;
int number = 78;

int main()
{
    //local variable
    int local = 11;

    //dynamically allocated memory
    int *p = (int *)malloc(10 * sizeof(int));
    *p = 78;

    printf("%d\n", local);
    printf("%d\n", *p);
}