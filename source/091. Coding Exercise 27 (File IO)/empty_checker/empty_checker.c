#include <stdio.h>

int main(){

    FILE *file;

    file = fopen("notes.txt", "r");
    if (file == NULL){
        printf("The file cannot be opened.\n");
        return -1;
    }

    char ch = fgetc(file);
    if(ch == -1){
        printf("The file is empty.\n");
    } else {
        printf("The file is not empty.\n");
    }

    fclose(file);

    return 0;
}