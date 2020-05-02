#include <stdio.h>
#include <math.h>

int main()
{

    float a, b, c;
    float x1, x2;

    printf("Enter the coefficients a, b and c: ");

    scanf("%f %f %f", &a, &b, &c);

    float discriminant = b * b - 4 * a * c;

    if (discriminant >= 0)
    {
        x1 = (-1 * b - sqrt(discriminant)) / (2 * a);
        x2 = (-1 * b + sqrt(discriminant)) / (2 * a);

        printf("The roots are: %.3f and %.3f \n", x1, x2);
    }
    else
    {
        printf("There are no real roots for such equation.\n");
    }

    return 0;
}