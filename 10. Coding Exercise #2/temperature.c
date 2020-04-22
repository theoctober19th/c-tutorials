#include <stdio.h>

int main()
{

    float celcius;
    printf("Enter the temperature in Celcius: ");
    scanf("%f", &celcius);

    float fahrenheit = (celcius * 9 / 5.0f) + 32;
    printf("Temperature in Fahrenheit = %.2f degrees.\n", fahrenheit);

    return 0;
}