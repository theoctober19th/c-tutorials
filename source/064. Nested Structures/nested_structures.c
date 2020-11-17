#include<stdio.h>

struct Date {
    int year;
    int month;
    int day;
};

struct Person {
    int age;
    char name[100];
    char gender;
    int salary;
    struct Date dob;
};

int main(){

    struct Person bikalpa;

    scanf("%d", &bikalpa.dob.year);
    bikalpa.dob.month = 10;
    bikalpa.dob.day = 19;

    printf("%d / %d / %d \n", bikalpa.dob.year, bikalpa.dob.month, bikalpa.dob.day);
    return 0;
}