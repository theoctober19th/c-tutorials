//      *
//    * * *
//  * * * * *
//* * * * * * *
#include <stdio.h>
int main()
{

    int i, space, star;
    for (i = 1; i <= 4; i++)
    {
        //for printing spaces
        for (space = 1; space <= 4 - i; space++)
        {
            printf("  ");
        }

        //for printing the stars
        for (star = 1; star <= 2 * i - 1; star++)
        {
            printf("* ");
        }

        printf("\n");
    }
    return 0;
}