#include <stdio.h>
#include <string.h>


#if DEBUG
    #ifndef _WIN64
        #define _WIN64
    #endif

    #ifdef __APPLE__
        #undef __APPLE__
    #endif
#endif


int main(){

    char username[50] = "";
    char home_path[100] = "";

    printf("Enter your username: ");
    scanf("%s", username);

    #ifdef __linux__
        strcat(home_path, "/home/");
        strcat(home_path, username);
    #endif

    #if defined(_WIN32) || defined(_WIN64)
        strcat(home_path, "C:\\Users\\");
        strcat(home_path, username);
    #endif

    #ifdef __APPLE__
        strcat(home_path, "/Users/");
        strcat(home_path, username);
    #endif

    printf("Your home directory is: %s\n", home_path);

    return 0;
}