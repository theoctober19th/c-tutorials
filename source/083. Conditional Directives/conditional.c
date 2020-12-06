#include<stdio.h>
#include<stdlib.h>

int main(){

   #ifdef _WIN32
    printf("Windows 32 Bit.\n");
    //

    #endif

    #ifdef _WIN64
        printf("Windows 64 Bit.\n");
    #endif

    #ifdef __APPLE__
        printf("Apple macine.\n");

        printf("hello");

    #endif

    #ifdef __linux__
        printf("Linux machine.\n");
    #endif

    return 0;
}