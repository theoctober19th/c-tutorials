#include <stdio.h>

int main(){

    FILE *file = fopen("formatted_io.txt", "w");

    if(file == NULL){
        printf("The file could not be opened for writing.");
        return -1;
    }

    fprintf(file, "%d %f %c", 100, 3.14f, 'A');

    fclose(file);

    return 0;
}