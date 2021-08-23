#include <stdio.h>
#include <stdlib.h>
#include "student.h"

int main(){

    FILE *student_file;
    student_file = fopen("students.dat", "rb");
    
    if (student_file == NULL){
        printf("The file cannot be read.\n");
        exit(1);
    }

    struct Student students[3];

    fread(
        students,
        sizeof(struct Student),
        3,
        student_file
    );

    printf("%10s %20s %15s\n", "Roll", "Name", "Percentage");

    for(int i=0; i<3; i++){
        float percent = ( students[i].marks[0] + students[i].marks[1] + students[i].marks[2] + students[i].marks[3] + students[i].marks[4] ) / 5.0;

        printf("%10d %20s %15f\n", students[i].roll, students[i].name, percent);
    }


    fclose(student_file);

    return 0;
}