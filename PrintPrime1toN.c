#include<stdio.h>
#include<conio.h>

void printPrime(int n);
int checkPrime(int n);

int checkPrime(int n)
{
    if(n<=1)
    {
        return 0;
    }
    for(int j=2 ; j*j<=n ; j++)
    {
        if(n%j==0)
        {
            return 0;
        }
    }
    return 1;
}


void printPrime(int n)
{

    for(int i=1 ; i<=n ; i++)
    {

        if(checkPrime(i))
            printf("%d\t", i);
    }
}


int main()
{
    int n;
    printf("Enter the number up to which you want to print Prime Numbers.\n");
    scanf("%d", &n);

    while(n<=0)
    {
        printf("Enter a non-Negative number.\n");
        scanf("%d", &n);
    }

    printPrime(n);

    getch();
    return 0;
}
