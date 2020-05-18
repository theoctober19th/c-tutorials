#include <stdio.h>

int main()
{

    char words[][50] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    printf("Enter a number: ");
    int n;
    scanf("%d", &n);

    if (n < 0 || n > 9)
    {
        printf("You have to enter between 0 and 9");
        return 0;
    }

    printf("You entered %s\n", words[n]);

    return 0;
}