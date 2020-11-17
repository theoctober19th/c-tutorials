#include <stdio.h>

struct complex
{
    double real;
    double img;
};

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

int main()
{

    struct complex c1 = {1, 2}, c2 = {5.5, 6.7};
    struct complex sum, product;
    sum = add(c1, c2);
    product = multiply(c1, c2);
    print(sum);
    print(product);
}