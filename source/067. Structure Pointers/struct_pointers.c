#include <stdio.h>

typedef struct
{
    int age;
    char name[100];
    char gender;
    int salary;
} Person;

void increase_salary(Person *ptr)
{
    (ptr->salary) = ptr->salary + 10000;
}

int main()
{

    Person *ptr;
    Person person = {23, "HelloMan", 'M', 20000};

    ptr = &person;

    // ptr->age;  p.age

    printf("%d\n", ptr->age);
    printf("Salary = %d\n", ptr->salary);
    increase_salary(ptr);
    printf("Salary = %d\n", ptr->salary);
    return 0;
}