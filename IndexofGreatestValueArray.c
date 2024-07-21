#include<stdio.h>
#include<conio.h>

int maxIndex(int [], int);

int maxIndex(int a[], int size)
{
    int i, maxindex=0, maxElement=a[0];
    for(i=0 ; i<size ; i++)
    {
        if(a[i]>l)
        {
            l=a[i];
            ind=i;
        }
    }
    return ind;
}


int main()
{
    int a[10], in, i, size;

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

    in = maxIndex(a, size);

    printf("\nIndex of Largest Element in array is %d.\n", in);
    getch();
    return 0;

}
