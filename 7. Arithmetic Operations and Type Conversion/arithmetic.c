#include <stdio.h>
#define PI 3.1415f //1.0 1.0f are different

int main()
{

    float radius = 23.35;

    double volume = (4 / (float)3) * PI * radius * radius * radius;
    int integralValueOfVolume = (int)volume;

    printf("The volume is: %lf\n", volume);
    printf("The integer value of volume is: %d\n", integralValueOfVolume);

    return 0;
}