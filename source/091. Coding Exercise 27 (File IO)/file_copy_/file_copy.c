#include <stdio.h>
#include <stdlib.h>

int main(){

    FILE *infile;
    FILE *outfile;

    infile = fopen("report.pdf", "rb");
    if(infile == NULL){
        printf("The input file cannot be opened.\n");
        exit(-1);
    }

    outfile = fopen("report_copy.pdf", "wb");
    if (outfile == NULL){
        printf("The output file cannot be opened.\n");
        exit(-2);
    }

    char ch;
    while ( (ch = fgetc(infile)) != -1  ){
        fputc(ch, outfile);
    }


    fclose(infile);
    fclose(outfile);

    return 0;
}