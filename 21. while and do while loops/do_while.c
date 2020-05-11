#include <stdio.h>

int main()
{
    char choice;

    do
    {
        printf("Hello, welcome to bikalpa codes! \n");
        printf("Enter n to exit: ");

        scanf(" %c", &choice);

    } while (choice != 'n');

    return 0;
}