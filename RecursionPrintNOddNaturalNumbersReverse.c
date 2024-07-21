#include<stdio.h>
#include<conio.h>

void podd( int );

void podd ( int n )
{
    if( n>0 )
    {

        printf("%d ", 2*n-1);
        podd(n-1);
    }


}
int main()
{
    int k;
    printf("Enter value of k:");
    scanf("%d", &k);
    podd(k);
    getch();
    return 0;
}

