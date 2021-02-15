#include <stdio.h>

int main(){

    FILE *file = fopen("line_io.txt", "r");

    if (file ==  NULL){
        printf("File was not be opened successfully.");
        return -1;
    }


    char line[100];

    while( fgets(line, 100, file) != NULL ){
        puts(line);
    }

    fclose(file);
    

    return 0;
}