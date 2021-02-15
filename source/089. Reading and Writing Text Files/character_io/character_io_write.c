#include<stdio.h>

int main(){

    FILE *file = fopen("character_io.txt", "w");

    if(file == NULL){
        printf("The file cannot be opened.\n");
        return -1;
    }

    char name[]= "Bikalpa";

    for(int i=0; name[i] != '\0'; i++){
        fputc(name[i], file);
    }

    fclose(file);

    return 0;
}