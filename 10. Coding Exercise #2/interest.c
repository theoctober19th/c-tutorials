#include <stdio.h>
#include <math.h>

int main()
{
    float P, R;
    int n;

    printf("Enter the values of P, n and R: ");
    scanf("%f %d %f", &P, &n, &R);

    float simpleInterest = (P * n * R) / 100;
    float compoundInterest = P * (pow((1 + R / 100), n) - 1);

    float difference = compoundInterest - simpleInterest;
    int diffAsInteger = (int)difference;

    printf("The difference between simple interest and compound interest is: %d \n", diffAsInteger);

    return 0;
}