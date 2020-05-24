//       1
//     2 3 2
//   3 4 5 4 3
// 4 5 6 7 6 5 4
#include <stdio.h>
int main()
{

    int i, space, first, second;
    for (i = 1; i <= 4; i++)
    {
        //for printing spaces
        for (space = 1; space <= 4 - i; space++)
        {
            printf("  ");
        }

        //for first half
        for (first = i; first <= 2 * i - 1; first++)
        {
            printf("%d ", first);
        }

        //for second half
        for (second = 2 * i - 2; second >= i; second--)
        {
            printf("%d ", second);
        }

        printf("\n");
    }
    return 0;
}