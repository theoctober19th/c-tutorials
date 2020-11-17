#include <stdio.h>

int main()
{

    //declaring an array of 5 ints
    int nums[] = {5, 6, 9, 2, 4};
    //num itself is a pointer to first element of array here

    //declaring a pointer to an array of 5 ints
    int(*ptr)[5];
    //ptr now stores the address of array nums
    ptr = &nums;

    //printing nums as a pointer
    printf("nums = %p\n", nums);
    //printing nums+1 as a pointer
    printf("nums + 1 = %p\n", nums + 1);

    //printing ptr as a pointer
    printf("ptr = %p\n", ptr);
    //printing ptr+1 as a pointer
    printf("ptr+1 = %p\n", ptr + 1);

    return 0;
}