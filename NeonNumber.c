#include<stdio.h>
#include<conio.h>

int digits(int );
int neon(int );


int digits(int n)
{
    int di=0;
    while(n>0)
    {
        di++;
        n/=10;
    }
    return di;

}

int neon(int n)
{
    int square=n*n, remainder=0;
    int d=digits(square);
    for(int i=0; i<d ; i++)
    {
        remainder+=square%10;
        square/=10;
    }
    if(n==0)
        return 1;
    if(remainder==n)
        return 1;
        
    else
        return 0;
    
}

int main()
{
    int n;
    printf("Enter a number to check if it's neon or not:\n");
    scanf("%d", &n);

    if(neon(n))
        {
            printf("%d is a neon number.", n);
        }

    else
    {
        printf("%d is not a neon number.", n);
    }
    getch();
    return 0;

}