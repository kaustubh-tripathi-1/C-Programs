#include<stdio.h>
#include<conio.h>

int prime ( int );

int prime ( int x )
{
    int isPrime = 1; // 1 represents true, 0 represents false

    if ( x <= 1 )
        {
            isPrime = 0; // Not a prime number
        }
    else
    {
        for (int i = 2; i * i <= x; i++)
            {
                if (x % i == 0)
                {
                    isPrime = 0; // Not a prime number
                    break; // No need to continue the loop
                }
            }
    }
    return isPrime;
}




int main()
{
    int x, isPrime;
    printf("Enter a number: ");
    scanf("%d", &x);

    isPrime = prime(x);
    if (isPrime)
        {
            printf("%d is a prime number.\n", x);
        }
    else
        {
            printf("%d is not a prime number.\n", x);
        }
        getch();
        return 0;
}

