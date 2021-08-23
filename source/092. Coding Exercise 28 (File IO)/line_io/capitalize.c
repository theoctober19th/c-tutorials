#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINE_LENGTH 100

int main(){

    FILE *infile;
    FILE *outfile;

    infile = fopen("lines.txt", "r");
    if(infile == NULL){
        printf("The source file cannot be read.\n");
        exit(1);
    }

    outfile = fopen("capitalized.txt", "w");
    if (outfile == NULL){
        printf("The destination file cannot be read.\n");
        exit(2);
    }

    char line[MAX_LINE_LENGTH];

    while (  fgets(line, MAX_LINE_LENGTH, infile) != NULL  ){

        if (strlen(line) > 0){

            // logic to capitalize
            if ( 'a' <= line[0] && line[0] <= 'z'){
                int to_substract = 'a' - 'A';
                line[0] -= to_substract;
            }
        }

        fputs(line, outfile);
    }

    fclose(infile);
    fclose(outfile);

    return 0;
}