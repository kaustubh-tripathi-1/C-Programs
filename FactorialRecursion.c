#include<stdio.h>
#include<conio.h>


unsigned long long int factorial(int n);
unsigned long long int factorial(int n)
{
    if (n==0)
    {
        return 1;
    }
    else
    {
        return (n*factorial(n-1));
    }
}

int main()
{
    int n;
    printf("Enter a number to know its factorial :\n");
    scanf("%d", &n);

    while(n<0)
    {
        printf("Enter a Non-Negative number.\n");
        scanf("%d", &n);
    }


    printf("The Factorial of %d is %llu.", n, factorial(n));
    getch();
    return 0;
}

