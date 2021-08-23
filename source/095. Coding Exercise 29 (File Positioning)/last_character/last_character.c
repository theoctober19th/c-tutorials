#include <stdio.h>

int main(){

    FILE *file = fopen("paragraph.txt", "r");

    if(file == NULL){
        printf("The file cannot be opened.\n");
        return -1;
    }

    fseek(file, -1, SEEK_END);

    char last_char = fgetc(file);
    printf("The last character in the file is: %c\n", last_char);

    fclose(file);
    return 0;
}