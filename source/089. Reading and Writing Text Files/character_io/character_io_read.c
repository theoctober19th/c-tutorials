#include<stdio.h>

int main(){

    FILE *file = fopen("character_io.txt", "r");

    if(file == NULL){
        printf("The file cannot be opened.\n");
        return -1;
    }
    
    char ch;

    while(   ( ch = fgetc(file) )  != -1){
        printf("%c", ch);
    }

    fclose(file);

    return 0;
}