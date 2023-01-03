#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *file;

    // try to open a non existent file
    file = fopen("non_existent_file.txt", "r");
    if (file == NULL){
        printf("The file cannot be opened.\n");
        exit(10);
    }
    int number;
    // try to read from non existent file
    fscanf(file, "%d", &number);

    printf("The number in the file is: %d\n", number);
    fclose(file);

    return 0;
}