#include<stdio.h>
#include<conio.h>
int snum( int a[], int size );
int main()
{
    int i, a[7]={2, 784, 1 ,89,74,38,88}, sn;
    sn=snum(a, sizeof(a)/sizeof(a[0]));
    printf("Smallest number is : %d", sn);
    getch();
    return 0;
}

int snum(int a[], int size )
{
    int sn=a[0], i;
    for ( i=1 ; i<size  ; i++ )
    {
        if ( a[i]<sn )
        {
            sn=a[i];
        }
    }
    return sn;
}
