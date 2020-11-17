#include <stdio.h>
#include <string.h>

int main()
{

    char str[] = "Welcome to Bikalpa Codes";
    char str2[100];

    char str3[100] = "Hello ";
    char str4[100] = "Helli ";

    printf("String3 is equal to string4: %d\n", strncmp(str3, str4, 4));

    strcat(str3, "my channel.");

    //a = b;
    strcpy(str2, "Bikalpa");

    int n = strlen(str);

    printf("The length of string is: %d\n", n);
    puts(str3);
    puts(str2);
    return 0;
}