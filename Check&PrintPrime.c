#include <stdio.h>
#include <conio.h>

int checkprime(int );
void printPrime(int , int );

int checkprime(int n)
{
    int isPrime = 1;
    for(int i=2 ; i*i<=n ; i++)
    {
        if(n%i==0)
        {
            isPrime=0;
            break;
        }
    }

    return isPrime;
}

void printPrime(int a, int b)
{
    for(int i=a ; i<=b ; i++)
    {
        if(checkprime(i))
        {
            printf("%d\t", i);
        }
    }
}

int main()
{
    int a,b;

    printf("Enter range of numbers for which you want to prime numbers-\n");
    scanf("%d%d", &a, &b);

    while(a<2 || b<2)
    {
        printf("A & B should be greater than 1.Enter again -\n");
        scanf("%d%d", &a, &b);
    }

    printf("Prime Numbers between %d & %d are -\n", a, b);
    printPrime(a,b);

    getch();
    return 0;


}
