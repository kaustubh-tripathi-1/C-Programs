#include<stdio.h>
#include<conio.h>
int main()
{
    int x, isPrime = 1; // 1 represents true, 0 represents false

    printf("Enter a number: ");
    scanf("%d", &x);

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

    if (isPrime)
        {
            printf("%d is a prime number.\n", x);
        }
    else
        {
            printf("%d is not a prime number.\n", x);
        }

    return 0;
    getch();
}

