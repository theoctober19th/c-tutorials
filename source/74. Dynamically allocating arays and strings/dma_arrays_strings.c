#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, nchar;
    printf("Enter the number of integers: ");
    scanf("%d", &n);
    printf("Enter the number of characters in string: ");
    scanf("%d", &nchar);

    int *arr = (int *)malloc(n * sizeof(int));

    if (arr == NULL)
    {
        printf("The allocation was unsuccessful!\n");
        exit(1);
    }

    int i;
    for (i = 0; i < n; i++)
    {
        scanf("%d", arr + i);
    }

    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");

    if (arr != NULL)
    {
        free(arr);
    }

    char *str = (char *)malloc((nchar + 1) * sizeof(char));
    if (str == NULL)
    {
        printf("The allocation was unsuccessful!\n");
        exit(1);
    }

    scanf("%s", str);
    printf("The string you entered is: %s", str);

    if (str != NULL)
    {
        free(str);
    }

    return 0;
}