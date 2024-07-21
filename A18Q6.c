#include<stdio.h>
#include<conio.h>

void reverse(int *, int * );
void reverse(int *a, int *size )
{
    printf("Values of array entered by you in Reverse order : \n");
    for( int i=*size-1 ; i>=0 ; i-- )
    {
        printf("%d\t", a[i]);
    }
}

int main ()
{
    int ar[10], i;
    int size = sizeof(ar)/sizeof(ar[0]);
    printf("Enter values for an array : \n");
    for( i=0 ; i< size ; i++ )
    {
        scanf("%d", &ar[i]);
    }
    printf("Values of array entered by you :\n");
    for( i=0 ; i<size ; i++ )
    {
         printf("%d\t", ar[i]);
    }
    printf("\n\n");
    reverse(ar, &size );
    getch();
    return 0;
}
