#include <stdio.h>
#include <complex_numbers.h>

int main()
{

    struct complex c1 = {1, 2}, c2 = {5.5, 6.7};
    struct complex sum, product;
    sum = add(c1, c2);
    product = multiply(c1, c2);
    print(sum);
    print(product);
    printf("Hello Mars");
}