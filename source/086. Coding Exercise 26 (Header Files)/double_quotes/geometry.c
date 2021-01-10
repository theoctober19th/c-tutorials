#include "include/constants.h"
#include "include/geometry.h"

double area_square(double length){
    return length * length;
}

double area_rectangle(double length, double breadth){
    return length * breadth;
}

double area_circle(double radius){
    return PI * radius * radius;
}