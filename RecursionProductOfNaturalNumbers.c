#include<stdio.h>
#include<conio.h>


int product ( int n )
{

    if( n==1 )
        return 1;

    return n*product(n-1);
}

int main()
{
    int k, n;
    printf("Enter value of k:");
    scanf("%d", &n);
    k = product (n);
    printf("Product of First %d Natural Numbers is %d", n, k);
    getch();
    return 0;
}
