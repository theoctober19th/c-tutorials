#include <stdio.h>
#include <math.h>

int main()
{
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    int temp = number;
    int count = 0;

    //count the number of digits
    do
    {
        count = count + 1;
        temp = temp / 10;
    } while (temp != 0);

    temp = number;

    int sum = 0;

    // check if armstrong
    do
    {

        int digit = temp % 10;
        sum = sum + (int)pow(digit, count);
        temp = temp / 10;
    } while (temp != 0);

    if (sum == number)
    {
        printf("The number is armstrong number.\n");
    }
    else
    {
        printf("The number is not armstrong number.\n");
    }
    return 0;
}