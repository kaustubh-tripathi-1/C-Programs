#include<stdio.h>
#include<conio.h>

int arraySum(int [], int);

int arraySum(int a[], int size)
{
    int sum=0;
    for(int i=0 ; i<5 ; i++)
    {
        sum+=a[i];
    }
    return sum;
}

int main()
{
    int a[5], i, sum;

    printf("Enter 5 elements for an array to calculate their sum :\n");
    for( i=0 ; i<5 ; i++)
    {
        scanf("%d", &a[i]);
    }

    sum = arraySum(a, sizeof(a)/sizeof(a[0]));
    printf("Sum of array elements is %d.\n", sum);
    getch();
    return 0;
}
