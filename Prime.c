#include <stdio.h>
#include <conio.h>

//Most Efficient

int checkprime(int n)
{
    int isPrime = 1;
    for(int i=2 ; i*i<n ; i++)
    {
        if(n%i==0)
        {
            isPrime=0;
            break;
        }
    }

    return isPrime;
}

int main()
{
    int n, isPrime;

    printf("Enter a Number to check if its prime or not -\n");
    scanf("%d", &n);

    isPrime = checkprime(n);
    if(isPrime)
        printf("%d is Prime.", n);
    else
        printf("%d is not Prime.", n);

    getch();
    return 0;


}
