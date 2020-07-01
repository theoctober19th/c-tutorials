#include <stdio.h>

enum Color
{
    BLACK = 12,
    WHITE = 9,
    RED = 0,
    BLUE = 89
};

int main()
{

    enum Color bgColor = WHITE;

    printf("BLACK = %d\n", BLACK);
    return 0;
}