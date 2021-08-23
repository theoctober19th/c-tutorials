#include <stdio.h>
#include <stdlib.h>
#include "student.h"

int main(){

    FILE *student_file;

    student_file = fopen("students.dat", "wb");
    if(student_file == NULL){
        printf("The file cannot be opened.\n");
        exit(1);
    }

    struct Student students[3];

    int i;
    for( i=0; i<3; i++) {
        printf("Entering the data for student %d\n", i);

        printf("Enter the roll number: ");
        scanf("%d", &(students[i].roll) );

        printf("Enter the name of student: ");
        scanf("%s", students[i].name );

        printf("Enter the marks in 5 subjects: ");
        for(int j=0; j<5; j++){
            scanf("%d", &(students[i].marks[j]) );
        }
    }

    fwrite(
        students,
        sizeof(struct Student),
        3,
        student_file
    );


    fclose(student_file);

    return 0;
}