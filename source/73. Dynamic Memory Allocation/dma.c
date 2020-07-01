#include <stdio.h>
#include <stdlib.h> //for using calloc, malloc, realloc and free

int main()
{

    // allocating 100*4 bytes for arr1 at compile time
    int arr1[100];
    int n;
    printf("Enter the number of integers: ");
    scanf("%d", &n);

    // using variable length array allocates 4*n bytes for arr2 at runtime
    int arr2[n];

    //using dynamic memory allocation now onwards

    // allocating 4*n bytes memory at runtime using malloc
    int *arr3 = (int *)malloc(n * sizeof(int));

    // allocating 4*n bytes memory at runtime using calloc, all initilized to zero
    int *arr4 = (int *)calloc(n, sizeof(int));

    //reallocating memory for 2 times the existing memory
    int *arr5 = (int *)realloc(arr3, 2 * n * sizeof(int));
    if (arr5 != NULL)
        arr3 = arr5;

    // deallocating memory
    if (arr3 != NULL)
        free(arr3);
    if (arr4 != NULL)
        free(arr4);
    if (arr5 != NULL)
        free(arr5);

    return 0;
}