#include<stdio.h>
#include<conio.h>

void sort (int [] );

void sort ( int a[])
{
    int i, j, temp;
    for ( i=0 ; i<10 ; i++ )
    {
        for ( j=0 ; j<9-i ; j++ )
        {
            if ( a[j]>a[j+1] )
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
}

int main()
{
    int i, a[10]={43,9432,943,284,93,8432,84,192,921,83};
    sort(a);
    printf("Here's the sorted array : ");
    for( i=0 ; i<10 ; i++ )
    {
        printf("%d ", a[i]);
    }
    getch();
}



