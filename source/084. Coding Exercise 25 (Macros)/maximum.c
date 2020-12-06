#include <stdio.h>
#define MAX(a, b) (a) > (b) ? (a) : (b)

#ifdef DEBUG

int main(){
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("The maximum of two numbers is: %d\n", MAX(num1, num2));

    #ifndef __cplusplus
        printf("C++ compiler is not used. Now simulating the C++ compiler usage.\n");
        #define __cplusplus

        #ifdef __cplusplus
            printf("You are using a C++ compiler to compile this file.\n");
        #endif
    #endif
    return 0;
}

#else

int main(){
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("The maximum of two numbers is: %d\n", MAX(num1, num2));

    #ifdef __cplusplus
        printf("You are using a C++ compiler to compile this file.\n");
    #endif
    return 0;
}

#endif