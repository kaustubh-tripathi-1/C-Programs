#include <stdio.h>
#include <conio.h>

int main()
{

    long long int number, reversedNumber = 0;

    printf("Enter a number: ");
    scanf("%lld", &number);

    while (number != 0)
        {
        int digit = number % 10; // Extract the last digit
        reversedNumber = reversedNumber * 10 + digit; // Add the digit to the reversed number
        number /= 10; // Remove the last digit from the original number
        }

    printf("\nReversed number: %lld\n", reversedNumber);
    getch();
    return 0;
}
