#include<stdio.h>
#include<math.h>

struct vector{
    double x;
    double y;
    double z;
};

struct vector add(struct vector, struct vector);
double magnitude(struct vector);
double dot(struct vector, struct vector);
void print_vector(struct vector);

int main(){

    struct vector a = {1, 2, 3}, b={5.5, 6.7, 9};
    struct vector sum;
    double mag, dp;
    sum = add(a, b);
    mag = magnitude(a);
    dp = dot(a, b);

    printf("The sum of vectors: \n");
    print_vector(sum);
    printf("magnitude of vector a: %lf\n", mag);
    printf("dot product of vectors a and b : %lf\n", dp);
    
    return 0;
}

struct vector add(struct vector v1, struct vector v2){
    struct vector sum;
    sum.x = v1.x + v2.x;
    sum.y = v1.y + v2.y;
    sum.z= v1.z+ v2.z;
    return sum;
}

double magnitude(struct vector v){
    return sqrt(v.x * v.x + v.y * v.y + v.z * v.z);
}

double dot(struct vector v1, struct vector v2){
    return v1.x * v2.x + v1.y * v2.y + v1.z * v2.z;
}

void print_vector(struct vector v){
    printf("%lf\n%lf\n%lf\n", v.x, v.y, v.z);
}
