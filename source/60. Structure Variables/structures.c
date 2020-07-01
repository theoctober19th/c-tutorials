#include<stdio.h>
#include<string.h>

struct student {
    int roll;
    float percent;
    char name[100];
    int marks[3];
};


int main(){

    struct student s = {100, 92.40f};
    struct student bikalpa = {1, 89};
    // struct student s = {2, 34}, bikalpa={5, 67};

    // s.roll = 100;
    // s.percent = 92.40f;

    printf("roll of s = %d\n", s.roll);
    printf("percent of s = %.2f\n", s.percent);

    // s.name[0] = 'Y';
    // s.marks[2] = 99;

    strcpy(s.name, "Jara");

    puts(s.name);

    bikalpa.roll = s.roll;

    printf("roll of bikalpa = %d\n", bikalpa.roll);
    printf("percent of bikalpa = %.2f\n", bikalpa.percent);

    return 0;
}