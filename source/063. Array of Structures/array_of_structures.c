#include<stdio.h>

struct Person {
    int age;
    char name[100];
    char gender;
    int salary;
};

int average(struct Person persons[], int n){
    int sum = 0;
    int i;
    for(i=0; i<n; i++){
        sum = sum + persons[i].salary;
    }
    return sum / n;
}

int main(){
    
    struct Person persons[4] = {
        {20, "Bikalpa", 'M', 10000},
        {23, "Geralt", 'M', 20000},
        {34, "Yennifer", 'F', 70000},
         {34, "Renfri", 'F', 70000}
    };

    int avg = average(persons, sizeof(persons) / sizeof(persons[0]));
    printf("The average salary is: %d\n", avg);

    return 0;
}