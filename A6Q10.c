#include <stdio.h>
#include<conio.h>
int main()
{
    int number, rotatedNumber;

    printf("Enter a three-digit number: ");
    scanf("%d", &number);

    // Extracting the digits
    int digit1 = number / 100;
    int digit2 = (number / 10) % 10;
    int digit3 = number % 10;

    // Rotating the digits
    rotatedNumber = (digit3 * 100) + (digit1 * 10) + digit2;

    printf("Rotated number: %d\n", rotatedNumber);
    getch();

    return 0;
}
