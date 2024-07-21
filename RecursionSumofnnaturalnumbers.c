#include<stdio.h>
#include<conio.h>


int sum ( int n )
{

    if( n==1 )
        return 1;

    return n+sum(n-1);
}

int main()
{
    int k, n;
    printf("Enter value of k:");
    scanf("%d", &n);
    k = sum (n);
    printf("Sum of First %d Natural Numbers is %d", n, k);
    getch();
    return 0;
}
