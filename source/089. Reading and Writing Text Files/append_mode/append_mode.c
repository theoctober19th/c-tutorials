#include <stdio.h>

int main(){

    FILE *file = fopen("append.txt", "w");

    if(file == NULL){
        printf("The file cannot be opened.\n");
        return -1;
    }

   

    fputs("\nThis is the last line.", file);


    fclose(file);

    return 0;
}