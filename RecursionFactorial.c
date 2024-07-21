#include<stdio.h>
#include<conio.h>

int factorial( int );
int main()
{
    int k;
    k = factorial (10);
    printf("%d", k);
    getch();
}

int factorial ( int n )
{
    
    if( n==0 )
        return 1;
    
    return n*factorial(n-1);
}
