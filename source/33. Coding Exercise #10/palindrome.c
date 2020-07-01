#include <stdio.h>
// #include <string.h>

int main()
{

    char str[100];
    printf("Enter a string: ");
    scanf("%100s", str);

    int i;
    int isPalindrome = 1;

    // int n = strlen(str);

    int n = 0;
    for (i = 0; str[i] != '\0'; i++, n++)
        ;

    for (i = 0; i < n - 1 - i; i++)
    {
        if (str[i] != str[n - 1 - i])
        {
            isPalindrome = 0;
            break;
        }
    }

    if (isPalindrome)
    {
        printf("The given string is a palindrome.\n");
    }
    else
    {
        printf("The given string is not a palindrome.\n");
    }

    return 0;
}