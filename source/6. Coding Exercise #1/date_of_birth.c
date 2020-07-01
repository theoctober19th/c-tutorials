#include <stdio.h>

int main()
{

    unsigned int year, month, day;
    printf("Please enter your date of birth in format YYYY-MM-DD: ");
    scanf("%u-%u-%u", &year, &month, &day);

    printf("You were born on %u year %u month %u day.", year, month, day);

    return 0;
}