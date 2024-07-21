#include<stdio.h>
#include<conio.h>

void pnat( int );

void pnat ( int n )
{
    if( n>0 )
    {
        printf("%d ", n);
        pnat(n-1);
    }

}
int main()
{
    int k;
    printf("Enter value of n:");
    scanf("%d", &k);
    pnat(k);
    getch();
    return 0;
}

