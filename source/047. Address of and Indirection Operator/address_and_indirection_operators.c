#include <stdio.h>

int main()
{
    // & *
    int a = 10, b = 20, *q;

    printf("value of a = %d\n", a);
    printf("value of b = %d\n", b);

    printf("Address of a = %d\n", &a);
    printf("address of b= %d\n", &b);

    printf("size of a = %d\n", (int)sizeof(a));

    int *ptr = &a;
    // ptr = &a;

    printf("ptr = %d\n", ptr);
    printf("*ptr = %d\n", *ptr);

    printf("&ptr = %d\n", &ptr);

    printf("*&ptr = %d\n", *&a);
    printf("*&*ptr = %d\n", *&*ptr);

    *ptr = 100;
    printf("After change of value.\n");
    printf("a = %d\n", a);
    printf("ptr = %d\n", ptr);
    printf("*ptr = %d\n", *ptr);

    b = *ptr;

    printf("value of b = %d\n", b);
    printf("address of b= %d\n", &b);
    return 0;
}