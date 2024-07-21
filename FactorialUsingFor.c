#include <stdio.h>
#include <conio.h>
// Function prototype
unsigned long long factorial(int *num);

// Function to calculate factorial
unsigned long long factorial(int *num)
{
    unsigned long long fact=1;
    for(int i = *num ; i>=1 ; i-- )
    {
        fact=fact*i;
    }
    return fact;
}

int main()
{
    int num;
    unsigned long long fact;

    // Input number from user
    printf("Enter a non-negative integer: ");
    scanf("%d", &num);

    // Calculate factorial
    fact = factorial(&num);

    // Display the factorial
    printf("Factorial of %d = %llu\n", num, fact);
    getch();
    return 0;
}


