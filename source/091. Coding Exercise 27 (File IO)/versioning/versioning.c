#include <stdio.h>
#include <stdlib.h>

int main(){

    FILE *infile;
    FILE *outfile;

    infile = fopen("version.txt", "r");
    if (infile == NULL){
        printf("Cannot open input file.\n");
        exit(1);
    }

    outfile = fopen("version.json", "w");
    if (outfile == NULL){
        printf("Cannot open output file.\n");
        exit(2);
    }

    int major;
    int minor;
    int patch;
    int build;

    fscanf(infile, "%d.%d.%d.%d", &major, &minor, &patch, &build);

    fprintf(
        outfile,

        "{\n"
        "\t\"major\": %d,\n"
        "\t\"minor\": %d,\n"
        "\t\"patch\": %d,\n"
        "\t\"build\": %d\n"
        "}",

        major, minor, patch, build
    );

    fclose(infile);
    fclose(outfile);

    return 0;
}