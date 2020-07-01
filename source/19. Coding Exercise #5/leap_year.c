#include <stdio.h>

int main()
{

    int year;
    printf("Enter a year: ");

    scanf("%d", &year);

    int isLeapYear;

    if (year % 4 != 0)
    {
        isLeapYear = 0;
    }
    else
    {
        if (year % 100 != 0)
        {
            isLeapYear = 1;
        }
        else
        {
            if (year % 400 == 0)
            {
                isLeapYear = 1;
            }
            else
            {
                isLeapYear = 0;
            }
        }
    }

    if (isLeapYear)
    {
        printf("The year is a leap year.\n");
    }
    else
    {
        printf("The year is not a leap year. \n");
    }

    return 0;
}