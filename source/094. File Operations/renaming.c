#include <stdio.h>

int main(){

    if ( rename("machhapuchre.txt", "annapurna.txt") != 0 ){
        printf("The file cannot be renamed.");
    } else {
        printf("The file was renamed successfully.");
    }


    return 0;
}