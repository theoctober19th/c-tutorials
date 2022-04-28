#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

    if(argc != 3){
        printf("Usage: copy <src> <destination>");
        exit(1);
    }

    char *source_filename = argv[1];
    char *dest_filename = argv[2];

    FILE *src, *dst;

    src = fopen(source_filename, "r");
    if(src == NULL){
        printf("The file %s does not exist.\n", source_filename);
        exit(2);
    }
    dst = fopen(dest_filename, "w");
    if(dst == NULL){
        printf("The file %s cannot be created.\n", dest_filename);
        fclose(src);
        exit(3);
    }
    int ch;

    while( (ch = fgetc(src)) != EOF ){
        fputc(ch, dst);
    }

    fclose(src);
    fclose(dst);

    return 0;
}