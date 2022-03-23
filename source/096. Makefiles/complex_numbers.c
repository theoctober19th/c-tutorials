#include <stdio.h>
#include <complex_numbers.h>

struct complex add(struct complex c1, struct complex c2)
{
    struct complex res;
    res.real = c1.real + c2.real;
    res.img = c1.img + c2.img;
    return res;
}

struct complex multiply(struct complex c1, struct complex c2)
{
    struct complex product;
    product.real = c1.real * c2.real - c1.img * c2.img; //ac - bd
    product.img = c1.real * c2.img + c2.real * c1.img;  //ad + bc
    return product;
}

void print(struct complex n)
{
    printf("%lf + i %lf\n", n.real, n.img);
}
