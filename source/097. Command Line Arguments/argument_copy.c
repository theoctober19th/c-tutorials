#include <stdio.h>

int main(int argc, char *argv[]){

    printf("The number of arguments = %d\n", argc);

    printf("The command line argumnets are: \n");
    for(int i =0; i < argc; i++){
        printf("Command line argument %d = %s\n", i, argv[i]);
    }

    // argv[argc] == NULL;
    return 0;
}