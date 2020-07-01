#include<stdio.h>

// typedef unsigned int  ui;
typedef unsigned int ui;
typedef char string[100];
typedef int *iptr;

typedef struct {
    int age;
    char name[100];
    char gender;
    int salary;
} person;

void print_person(person p){
    printf("Age: %d\n", p.age);
    printf("Name: %s\n", p.name);
    printf("Gender: %c\n", p.gender);
    printf("Salary: %d\n", p.salary);
}

int main(){
    ui a = 20;
    // int *p;
    // iptr p;
    string name = "bikalpa";
    printf("%s\n", name);
    printf("a = %u\n", a);

    person p = {1, "asdfasdf", 'f', 45324};
    print_person(p);
    return 0;
}