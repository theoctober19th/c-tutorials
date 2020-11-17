#include <stdio.h>
#define PI 3.14f
#define NEWLINE printf("\n")
#define N 100

#define MAX(x, y) (x > y ? x : y)
#define SIZE(arr) (sizeof(arr) / sizeof(arr[0]))
#define DOUBLE(x) (x) * 2

int main()
{
    int array[N];
    int nums[] = {1, 3, 5, 6, 8, 9};
    printf("The size of nums is: %d\n", SIZE(nums));

    printf("The value of pi is %f\n", PI);

    NEWLINE;

    printf("My name is Bikalpa");
    NEWLINE;

    float b = PI;

    int m = 20, n = 30;
    printf("The maximum is: %d\n", MAX(m, n));

    printf("Double of n + 1 = %d\n", DOUBLE(n + 1));

    printf("The current file name is: %s\n", __FILE__);
    printf("Right now the date is: %s\n", __DATE__);
    printf("Right now the time is: %s\n", __TIME__);
    return 0;
}