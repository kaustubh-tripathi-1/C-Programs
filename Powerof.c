#include <stdio.h>
#include <conio.h>

double powerOf(double x, double y)
{
    double result = 1;

    // Handle special cases
    if (y == 0)
        return 1;
    if (y == 1)
        return x;

    // Calculate x^y
    for (int i = 1; i <= y; i++)
    {
        result *= x;
    }

    return result;
}

int main()
{
    double base, exponent;
    printf("Enter base: ");
    scanf("%lf", &base);
    printf("Enter exponent: ");
    scanf("%lf", &exponent);

    double result = powerOf(base, exponent);
    printf("Result: %lf\n", result);

    getch();
    return 0;
}
