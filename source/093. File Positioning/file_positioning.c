#include <stdio.h>
#include <stdlib.h>

int main() {

    FILE *file;
    file = fopen("sample.txt", "r+");

    if (file == NULL){
        printf("Cannot open the file.\n");
        exit(1);
    }

    printf("Initial Position of cursor: %ld\n", ftell(file));


    // seeking to the 32nd position
    fseek(file, 30, SEEK_SET);

    printf("Updated Position of cursor: %ld\n", ftell(file));

    //writing 50 in place of 22
    fprintf(file, "50");

    printf("Position of cursor: %ld\n", ftell(file));

    // take the cursor to the beginning of the file
    fseek(file, 0, SEEK_SET);
    // rewind(file);

    printf("Position of cursor: %ld\n", ftell(file));

    fclose(file);
    return 0;
}