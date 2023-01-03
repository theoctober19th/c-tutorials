#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>

int main(){
    FILE *file;

    // Open the file in write mode
    file = fopen("data_file_nonexistent.txt", "r");

    if (file == NULL){
        // printf("File cannot be opened.\n");
        perror("Error in fopen");
        exit(5);
    }

    int number;
    // attempt to read from a file opened in write mode
    fscanf(file, "%d", &number);
    if (errno){
        // printf("The function fscanf has encountered error %d.\n", errno);
        // printf("Textual representation of errors is: %s.\n", strerror(errno));
        perror("Error in fscanf");
        exit(6);
    }

    printf("The number in the file is: %d\n", number);
    fclose(file);
}