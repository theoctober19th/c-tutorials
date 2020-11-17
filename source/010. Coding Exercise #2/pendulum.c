#include <stdio.h>
#include <math.h>
#define PI 3.14f

int main()
{

    float L;
    printf("Enter the length of the pendulum: ");
    scanf("%f", &L);

    float T = 2 * PI * sqrt(L / 9.8);
    printf("The time period of the pendulum is: %.3f \n", T);

    return 0;
}