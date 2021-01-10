# 1 "main.c"
# 1 "<built-in>" 1
# 1 "<built-in>" 3
# 366 "<built-in>" 3
# 1 "<command line>" 1
# 1 "<built-in>" 2
# 1 "main.c" 2
# 1 "/Users/bikalpa/Desktop/complex_numbers.h" 1



struct complex
{
    double real;
    double img;
};

struct complex add(struct complex c1, struct complex c2);
struct complex multiply(struct complex c1, struct complex c2);
void print(struct complex n);
# 2 "main.c" 2







int main()
{

    struct complex c1 = {1, 2}, c2 = {5.5, 6.7};
    struct complex sum, product;
    sum = add(c1, c2);
    product = multiply(c1, c2);
    print(sum);
    print(product);
}
