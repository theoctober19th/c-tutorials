#include <stdio.h>
#include <getopt.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

    char *short_options = "abc:";
    struct option long_options[] = {
        {"alpha", no_argument, NULL, 'a'},
        {"bravo", no_argument, NULL, 'b'},
        {"charlie", required_argument, NULL, 'c'},
        {NULL, 0, NULL, 0}
    };
    int optionindex = 0;
    int result;

    while( (result = getopt_long(argc, argv, short_options, long_options, &optionindex)) != -1 ){
        switch(result){
            case 'a':
                printf("The option -a or --alpha is set.\n");
                break;
            case 'b':
                printf("The option -b or --bravo is set.\n");
                break;
            case 'c':
                printf("The option -c or --charlie is set.\n");
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