#include <stdio.h>

int main()
{

    int arr[5] = {45, 65, 12, 32, 1};
    int *p, *q;

    p = &arr[0];
    q = &arr[0];

    if (p == q)
    {
        printf("p and q point to same object.\n");
    }
    else
    {
        printf("p and q point to different object.\n");
    }

    // printf("p = %x\n", p);
    // printf("*p = %d\n", *p);
    // printf("q-p=%d\n", q - p);

    // if (p < q)
    // {
    //     printf("%d occurs before %d\n", *p, *q);
    // }
    // else
    // {
    //     printf("%d occurs afteer %d\n", *p, *q);
    // }

    // p--;
    // printf("after change\n");
    // printf("p = %x\n", p);
    // printf("*p = %d\n", *p);

    return 0;
}