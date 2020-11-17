#include <stdio.h>
#include <stdlib.h>

//
// void allocate(int **arr)
// {
//     *arr = malloc(10 * sizeof(int));
//     if (*arr == NULL)
//     {
//         printf("Allocation failed!\n");
//         exit(0);
//     }
// }

int *allocate()
{
    int *arr = malloc(10 * sizeof(int));
    if (arr == NULL)
    {
        printf("Allocation failed!\n");
        exit(0);
    }
    return arr;
}

int main()
{
    int *array = NULL;
    array = allocate();

    //to use another form of allocate
    //(the one commented above)
    //allocate(&array);

    array[5] = 99;
    printf("array[5] = %d\n", array[5]);

    if (array != NULL)
    {
        free(array);
    }

    return 0;
}