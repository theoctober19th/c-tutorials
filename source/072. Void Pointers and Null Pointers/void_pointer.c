#include <stdio.h>

struct Student
{
    int roll;
    char name[100];
};

int main()
{
    int age = 78;
    float rate = 6.25f;
    char letter = 'A';
    struct Student s = {1, " Bikalpa"};

    void *ptr;
    ptr = &age;

    printf("*ptr = %d\n", *(int *)ptr);

    ptr = &rate;
    printf("*ptr = %f\n", *(float *)ptr);

    ptr = &letter;
    printf("*ptr = %c\n", *(char *)ptr);

    ptr = &s;
    printf("ptr->roll = %d\n", ((struct Student *)ptr)->roll);
    return 0;
}