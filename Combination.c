#include <stdio.h>
#include <conio.h>

// Function prototype
unsigned long long factorial(int num);
unsigned long long combination(int, int);

unsigned long long combination(int n, int r)
{
    unsigned long long c;
    c=factorial(n)/(factorial(r)* factorial(n-r));
    return c;
}

// Function to calculate factorial
unsigned long long factorial(int num)
{
    unsigned long long fact=1;
    for(int i = num ; i>=1 ; i-- )
    {
        fact=fact*i;
    }
    return fact;
}

int main()
{
    int n, r;
    unsigned long long com;

    // Input number from user
    printf("Enter a the values of n and r \n");
    scanf("%d%d", &n, &r);

    // Calculate factorial
    com = combination(n,r);

    // Display the factorial
    printf("Combination of %d objects taken %d at a time is = %llu\n", n, r, com);

    return 0;
}


