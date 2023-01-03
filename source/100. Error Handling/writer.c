#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *file;

    // try to open a write protected file in write mode
    file = fopen("/etc/hosts", "w");
    if (file == NULL){
        // printf("The file cannot be opened.\n");
        perror("Error in fopen");
        exit(-2);
    }

    // write data to the file
    fputs("10.11.12.13 bikalpa.com", file);

    printf("Successfully written to file /etc/hosts.");
    fclose(file);
}