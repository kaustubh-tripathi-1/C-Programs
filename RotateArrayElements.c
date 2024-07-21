#include<stdio.h>
#include<conio.h>

void Rotate(int [], int);

void Rotate(int rotated[], int size)
{
    int temp=rotated[size-1];
    for(int i=size-2 ; i>=0 ; i-- )
    {
        rotated[i+1]=rotated[i];
    }
    rotated[0]=temp;
}

void rotateN(int rotatedN[], int size, int n)
{
    n=n%size;
    for(int i=0 ; i<n ; i++)
        Rotate(rotatedN, size);
}

int main()
{
    int a[5], i, size, n;

    printf("Enter elements for an array:\n");

    for(i=0 ; i<sizeof(a)/sizeof(a[0]) ; i++ )
    {
        scanf("%d", &a[i]);
    }
    size = sizeof(a)/sizeof(a[0]);
    printf("Here's the array:\n");
    for(i=0 ; i<size ; i++ )
    {
        printf("%d\t", a[i]);
    }
    printf("\nEnter the number of positions you want the shift the array to right - ");
    scanf("%d", &n);

    rotateN(a,size, n);
    printf("\nHere's the right rotated array:\n");
    for( i=0; i<size ; i++)
    {
        printf("%d\t", a[i]);
    }

    getch();
    return 0;

}
