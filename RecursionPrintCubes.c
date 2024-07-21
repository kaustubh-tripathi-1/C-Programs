#include<stdio.h>
#include<conio.h>

void pcubes( int );

void pcubes ( int n )
{
    if( n>0 )
    {
        pcubes(n-1);
        printf("%d ", n*n*n);
    }


}
int main()
{
    int k;
    printf("Enter value of k:");
    scanf("%d", &k);
    pcubes(k);
    getch();
    return 0;
}

