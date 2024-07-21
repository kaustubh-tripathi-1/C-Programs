#include <stdio.h>
#include <conio.h>

int checkprime(int );
int nextPrime(int );

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

int nextPrime(int n)
{
    /*int i=n+1, next = 0;
    while(1)
    {
        if(checkprime(i))       My Logic, not very efficient
        {
            next = i;
            break;
        }
        i++;
    }
    return next;
    */

    //Easy Logic

    while(!checkprime(++n));
    return n;
}



int main()
{
    int n, next;

    printf("Enter a number after which you want to find next prime number -\n");
    scanf("%d", &n);
    while(n<1)
    {
        printf("Enter a number greater than 0 -\n");
        scanf("%d", &n);
    }


    next = nextPrime(n);

    printf("Next Prime Number after %d is %d", n, next);

    getch();
    return 0;


}
