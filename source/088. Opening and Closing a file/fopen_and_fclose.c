#include <stdio.h>

int main(){

    FILE *file_pointer;

    file_pointer = fopen("text_data.txt", "w");
    if(file_pointer == NULL){
        printf("Cannot open the file.\n");
        return -1;
    }

    printf("Opened the file successfully.\n");

    //read 
    //write

    if(file_pointer != NULL){
        fclose(file_pointer);
    }

    return 0;
}