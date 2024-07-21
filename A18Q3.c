#include <stdio.h>
#include <conio.h>

void sort (int *, int );
void sort (int *p, int size)
{

    for( int i=0 ; i<(size-1) ; i++ )
    {
        for( int j=0 ; j<(size-1-i) ; j++ )
        {
            if ( *(p+j) > *(p+j+1) )
            {
                int temp = *(p+j);
                *(p+j)=*(p+j+1);
                *(p+j+1)=temp;
            }
        }
    }
}


int main ()
{
    int a[7], i;
    printf("Enter 7 numbers for array :\n");
    for ( i=0 ; i<7 ; i++ )
    {
        scanf("%d", &a[i]);
    }

    printf("Here's the unsorted array :\n");
    for ( i=0 ; i<7 ; i++ )
    {
        printf("%d\t", a[i]);
    }
    printf("\n");
    sort(a, 7 );

    printf("Here's the sorted array :\n");
    for ( i=0 ; i<7 ; i++ )
    {
        printf("%d\t", a[i]);
    }

    getch();
    return 0;
}
