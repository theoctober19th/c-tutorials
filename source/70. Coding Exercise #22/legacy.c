#include <stdio.h>

typedef struct PersonT
{
    char name[100];
    struct PersonT *father;
} Person;

int main()
{

    Person p1 = {"Aegon", NULL};
    Person p2 = {"Rhaegar", NULL};
    Person p3 = {"Aerys II", NULL};

    p1.father = &p2;
    p2.father = &p3;

    Person *ptr = &p1;

    printf("His name: %s\n", ptr->name);
    printf("His father: %s\n", ptr->father->name);
    printf("His grandfather: %s\n", ptr->father->father->name);

    return 0;
}