#include<stdio.h>
#include<conio.h>

void peven( int );

void peven ( int n )
{
    if( n>0 )
    {
        printf("%d ", 2*n);
        peven(n-1);

    }


}
int main()
{
    int k;
    printf("Enter value of k:");
    scanf("%d", &k);
    peven(k);
    getch();
    return 0;
}

