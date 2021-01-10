#include <stdio.h>
#include "include/geometry.h"

int main(){
    double length = 15.0;
    double breadth = 2.0;
    double radius = 6.7;

    printf("The area of square is: %lf\n", area_square(length));
    printf("The area of rectangle is: %lf\n", area_rectangle(length, breadth));
    printf("The area of circle is: %lf\n", area_circle(radius));
    return 0;
}