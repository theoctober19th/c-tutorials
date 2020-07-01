#include <stdio.h>

int main()
{

    int a = 10 + 20 * 30;
    int b = 100 / 10 * 10;
    int c = 10 * 10 / 100;
    int d = 100 + 200 / 10 - 3 * 10;
    int e = 1 > 2 + 3 && 4;
    int f = 1 == 2 != 3;

    printf("a = %d\n", a);
    printf("b = %d\n", b);
    printf("c = %d\n", c);
    printf("d = %d\n", d);
    printf("e = %d\n", e);
    printf("f = %d\n", f);

    return 0;
}