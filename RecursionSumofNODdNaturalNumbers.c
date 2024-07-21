#include<stdio.h>
#include<conio.h>


int sum ( int n )
{
    if( n>0 )
        return (2*n-1)+sum(n-1);
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
