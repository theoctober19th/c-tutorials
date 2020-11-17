#include <stdio.h>

void printstring(char **names)
{
    int i;
    for (i = 0; i < 3; i++)
    {
        puts(*(names + i));
    }
}

int main()
{

    int num = 56;
    int *ptr = &num;
    int **dptr = &ptr;

    printf("ptr = %p\n", ptr);
    printf("dptr = %p\n\n", dptr);

    printf("*ptr = %d\n", *ptr);
    printf("*dptr = %p\n\n", *dptr);

    printf("**dptr = %d\n", **dptr);

    char *names[3] = {
        "Job",
        "You",
        "Lady"};

    printstring(names);
    return 0;
}