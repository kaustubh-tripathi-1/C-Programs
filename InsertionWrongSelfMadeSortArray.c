#include<stdio.h>
#include<conio.h>

void sort(int [], int);

void sort(int sa[], int size)
{
    int temp, i, j, sar[size];
    for(i=0 ; i<size ; i++)
    {
        for(j=i-1 ; j>=0 ; j--)
        {
            if(sa[j]>sa[j+1])
            {
                temp=sa[j];
                sa[j]=sa[j+1];
                sa[j+1]=temp;
            }
        }
    }
}


int main()
{
    int a[5], i, size;
    size = sizeof(a)/sizeof(a[0]);
    printf("Enter elements for an array -\n");
    for(i=0 ; i<size ; i++)
        scanf("%d", &a[i]);

    printf("\nHere's the array -\n");
    for(i=0 ; i<size ; i++)
        printf("%d\t", a[i]);

    sort(a, size);
    printf("\nHere's the sorted array -\n");
    for(i=0 ; i<size ; i++)
        printf("%d\t", a[i]);

    getch();
    return 0;

}
