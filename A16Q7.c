#include<stdio.h>
#include<conio.h>
int gnum( int a[], int size );

int gnum(int a[], int size )
{
    int ge=a[0], i;
    for ( i=1 ; i<size  ; i++ )
    {
        if ( a[i]>ge )
        {
            ge=a[i];
        }
    }
    return ge;
}

int main()
{
    int i, a[5]={2,89,74,38,88}, ge;
    ge=gnum(a, sizeof(a)/sizeof(a[0]));
    printf("Greater number is : %d", ge);
    getch();
    return 0;
}


