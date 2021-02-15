#include <stdio.h>

int main(){

    FILE *file = fopen("hybrid.txt", "r");

    if(file == NULL){
        printf("The file cannot be opened.\n");
        return -1;
    }

   

    //read from here
    printf("%c", fgetc(file) );

    printf("\n");

    char letter;
    fscanf(file, "%c", &letter);

    printf("%c", letter);
    printf("\n");

    char line[100];
    fgets(line, 100, file);
    puts(line);

    printf("\n");


    fclose(file);

    return 0;
}