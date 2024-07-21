#include <stdio.h>
#include <conio.h>

int isPrime(int num)
{
    if (num <= 1)
    {
        return 0; // false
    }
    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            return 0; // false
        }
    }
    return 1; // true
}

int nextPrime(int num)
{
    num++; // Start checking from the next number
    while (1)
    { // Infinite loop
        if (isPrime(num))
        {
            return num;
        }
        num++;
    }
}

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int next = nextPrime(n);

    printf("The next prime number after %d is %d.\n", n, next);

    return 0;
}
