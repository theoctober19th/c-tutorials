#include <stdio.h>
#include <stdlib.h>

int main(){
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // perform division
    if (num2 == 0){
        printf("The second number cannot be zero.\n");
        exit(1);
    }
    float result = num1 / num2;

    printf("The result of division is: %f\n", result);
}