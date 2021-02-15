#include <stdio.h>

int main(){

    FILE *file = fopen("formatted_io.txt", "r");

    if(file == NULL){
        printf("The file could not be opened for writing.");
        return -1;
    }

    // fprintf(file, "%d %f %c", 100, 3.14f, 'A');

    // fclose(file);

    int number;
    float pi;
    char letter;

    fscanf(file, "%d %f %c", &number, &pi, &letter);


    printf("%d %f %c", number, pi, letter);

    fclose(file);

    return 0;
}