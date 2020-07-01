#include <stdio.h>

void find_denomination(int sum, int *thousands, int *fivehundreds, int *hundreds, int *fifties,
                       int *twenties, int *tens, int *fives, int *twos, int *ones)
{
    while (sum >= 1000)
    {
        (*thousands)++;
        sum -= 1000;
    }
    while (sum >= 500)
    {
        (*fivehundreds)++;
        sum -= 500;
    }
    while (sum >= 100)
    {
        (*hundreds)++;
        sum -= 100;
    }
    while (sum >= 50)
    {
        (*fifties)++;
        sum -= 50;
    }
    while (sum >= 20)
    {
        (*twenties)++;
        sum -= 20;
    }
    while (sum >= 10)
    {
        (*tens)++;
        sum -= 10;
    }
    while (sum >= 5)
    {
        (*fives)++;
        sum -= 5;
    }
    while (sum >= 2)
    {
        (*twos)++;
        sum -= 2;
    }
    while (sum >= 1)
    {
        (*ones)++;
        sum -= 1;
    }
}

int main()
{

    int sum = 1750;
    int note1000 = 0, note500 = 0, note100 = 0, note50 = 0, note20 = 0, note10 = 0, note5 = 0, note2 = 0, note1 = 0;
    find_denomination(sum, &note1000, &note500, &note100, &note50, &note20, &note10, &note5, &note2, &note1);

    printf("The number of notes required are: \n");

    printf("1000 x %d\n", note1000);
    printf("500 x %d\n", note500);
    printf("100 x %d\n", note100);
    printf("50 x %d\n", note50);
    printf("20 x %d\n", note20);
    printf("10 x %d\n", note10);
    printf("5 x %d\n", note5);
    printf("2 x %d\n", note2);
    printf("1 x %d\n", note1);
    return 0;
}