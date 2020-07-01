#include <stdio.h>

int main()
{
    printf("enter the size of array: ");
    int n;
    scanf("%d", &n);

    int array[n];

    printf("enter the elements of array (%d elements): ", n);

    int i;

    for (i = 0; i < (int)(sizeof(array) / sizeof(array[0])); i++)
    {
        scanf("%d", &array[i]);
    }

    for (i = 0; i < (int)(sizeof(array) / sizeof(array[0])); i++)
    {
        printf("%d ", array[i]);
    }

    return 0;
}