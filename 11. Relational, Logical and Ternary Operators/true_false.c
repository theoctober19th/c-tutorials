#include <stdio.h>

int main()
{

    //condition ? truecase : falsecase;

    int marks = 40;
    int prize = marks > 32 ? 1000 : 0;

    printf("The prize you recieved is: %d\n", prize);

    return 0;
}