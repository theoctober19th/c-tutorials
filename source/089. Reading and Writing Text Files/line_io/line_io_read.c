#include <stdio.h>

int main(){

    FILE *file = fopen("line_io.txt", "w");

    if (file ==  NULL){
        printf("File was not be opened successfully.");
        return -1;
    }


    fputs("Hello there, welcome to my channel.\n", file);
    fputs("Do not forget to subscribe to my channel.", file);


    fclose(file);

    

    return 0;
}