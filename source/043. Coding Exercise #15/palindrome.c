#include <stdio.h>

int length(char str[])
{
    int i;
    for (i = 0; str[i] != '\0'; i++)
        ;
    return i;
}

int is_palindrome(char str[])
{
    int n = length(str);
    int i;
    for (i = 0; i < n - 1 - i; i++)
    {
        if (str[i] != str[n - 1 - i])
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);

    if (is_palindrome(str))
    {
        printf("The string is palindrome.\n");
    }
    else
    {
        printf("The string is not palindrome.\n");
    }
    return 0;
}