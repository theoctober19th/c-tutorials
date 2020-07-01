#include<stdio.h>

struct Person {
    int age;
    char name[100];
    char gender;
    int salary;
};

struct Person create_person();
void print_person(struct Person);
int average(struct Person, struct Person);
struct Person richer_among(struct Person, struct Person);

int main(){

    struct Person ram = {26, "Ram Prasad", 'M', 50000}, shyam = {30, "Shyam Narayan", 'M', 70000};
    int avg = average(ram, shyam);
    struct Person richer;
    richer = richer_among(ram, shyam);
    printf("The average salary is: %d\n", avg);
    printf("The richer one is: \n");
    print_person(richer);

    return 0;
}

struct Person create_person(){
    struct Person p;
    printf("Enter age of person: ");
        scanf("%d", &p.age);
    printf("Enter name of person: ");
        scanf("%s", p.name);
    printf("Enter gender of person: ");
        scanf(" %c", &p.gender);
    printf("Enter the salary of person: ");
        scanf("%d", &p.salary);
    return p;
}

void print_person(struct Person p){
    printf("Age: %d\n", p.age);
    printf("Name: %s\n", p.name);
    printf("Gender: %c\n", p.gender);
    printf("Salary: %d\n", p.salary);
}

int average(struct Person p1, struct Person p2){
    return (p1.salary + p2.salary) / 2;
}

struct Person richer_among(struct Person p1, struct Person p2){
    if(p1.salary > p2.salary){
        return p1;
    } else {
        return p2;
    }
}