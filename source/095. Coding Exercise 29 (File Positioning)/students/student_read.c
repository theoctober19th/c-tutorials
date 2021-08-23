#include <stdio.h>
#include "student.h"
#include <stdlib.h>
#include <string.h>

int main(){

    FILE *file = fopen("students.dat", "r+b");
    if(file == NULL){
        printf("Cannot open the file.\n");
        exit(1);
    }

    fseek(file, 1 * sizeof(struct Student), SEEK_SET);

    struct Student second_student;
    fread(
        &second_student,
        sizeof(struct Student),
        1,
        file
    );

    int marks_sum = 0;
    for(int i=0; i<5; i++){
        marks_sum += second_student.marks[i]; 
    }
    float percentage = marks_sum / 5.0;

    printf("The percentage of second student is: %.2f\n", percentage);

    fseek(file, 3 * sizeof(struct Student), SEEK_SET);
    struct Student fourth_student;

    fread(
        &fourth_student,
        sizeof(struct Student),
        1,
        file
    );

    strcpy(fourth_student.name, "Myrcella");
    fseek(file, 3 * sizeof(struct Student), SEEK_SET);

    fwrite(
        &fourth_student,
        sizeof(struct Student),
        1,
        file
    );

    rewind(file);
    struct Student students[5];
    fread(
        students,
        sizeof(struct Student),
        5,
        file
    );

    printf("The name of students in the file are: \n");
    for(int i=0; i<5; i++){
        puts(students[i].name);
    }

    fclose(file);

    return 0;
}