#include <stdio.h>
#include <getopt.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

    int opt;
    while ( (opt = getopt(argc, argv, "abc:")) != -1 ){
        switch(opt){
            case 'a':
                printf("The option -a is set.\n");
                break;
            case 'b':
                printf("The option -b is set.\n");
                break;
            case 'c':
                printf("The option -c is set.\n");
                printf("The value is: %s\n", optarg);
                break;
            case '?':
                printf("Invalid option format.\n");
                exit(1);
        }
    }

    printf("The positional arguments are: ");
    for(int i = optind; i < argc; i++){
        printf("%s ", argv[i]);
    }

    return 0;
}