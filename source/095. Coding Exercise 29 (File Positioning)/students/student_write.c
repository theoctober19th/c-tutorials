#include <stdio.h>
#include "student.h"
#include <stdlib.h>

int main(){

    FILE *file = fopen("students.dat", "wb");
    if (file == NULL){
        printf("The file cannot be opened.\n");
        exit(1);
    }

    struct Student students[5] = {
        {1, "apple", {98, 56, 67, 78, 98}},
        {2, "orange", {90, 56, 67, 78, 98}},
        {3, "Bikalpa", {98, 56, 67, 74, 98}},
        {4, "Codes", {98, 56, 67, 78, 98}},
        {5, "Macbook", {98, 56, 60, 78, 98}}
    };

    fwrite(
        students,
        sizeof(struct Student),
        5,
        file
    );

    printf("Written to the file successfully.\n");


    fclose(file);

    return 0;
}