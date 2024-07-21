#include<stdio.h>
#include<conio.h>

void psquares( int );

void psquares ( int n )
{
    if( n>0 )
    {
        psquares(n-1);
        printf("%d ", n*n);
    }


}
int main()
{
    int k;
    printf("Enter value of k:");
    scanf("%d", &k);
    psquares(k);
    getch();
    return 0;
}

