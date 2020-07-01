#include <stdio.h>

int length(char *str)
{
    int count = 0;
    for (count = 0; *(str + count) != '\0'; count++)
        ;
    return count;
}

int sum(int *arr, int n)
{
    int s = 0;
    int i;
    for (i = 0; i < n; i++)
    {
        s += *(arr + i); // arr[i] = *(arr + i)
    }
    return s;
}

int main()
{
    int nums[] = {5, 6, 9, 2, 4};

    printf("nums = %p\n", nums);
    printf("&nums[0] = %p\n", &nums[0]);
    // nums = nums + 2;
    printf("*(nums +2) = %d\n", *(nums + 2));

    //calculating the length of array
    int n = sizeof(nums) / sizeof(nums[0]);

    int i;
    int *p;

    //printing out the array elementwise
    for (p = nums; p < nums + n; p++)
    {
        printf("%d ", *p);
    }

    //printing the sum of all elements in array
    printf("\nthe sum is : %d\n", sum(nums, n));

    //printing ther sum of elements in the subarray starting from index 2. i.e. {9, 2, 4}
    printf("\nthe sum is : %d\n", sum(&nums[2], n - 2));

    char *str = "Bikalpa Codes"; // string literal
    printf("The length in the string is: %d\n", length(str));
    return 0;
}