#include <stdio.h>

int main()
{

    int num_arr[5] = {4, 7, 9, 1, 3};

    int *aop[5];

    int i;
    for (i = 0; i < 5; i++)
    {
        aop[i] = &num_arr[i];
    }

    for (i = 0; i < 5; i++)
    {
        printf("*aop[%d] = %d\n", i, *aop[i]);
    }

    char *names[5] = {
        "Sherlock",
        "James",
        "John",
        "Mancy",
        "Lestrade"};

    for (i = 0; i < 5; i++)
    {
        puts(names[i]);
    }

    return 0;
}