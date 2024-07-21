#include<stdio.h>
#include<conio.h>

int asum(int *);

int asum(int *p)
{
    int s=0;
    for (int i=0 ; i<4 ; i++)
    {
        s+= p[i];
    }
    return s;
}


int main()
{
    int a[4], sum;
    printf("Enter elements for an array :\n");
    for (int i=0 ; i<4 ; i++)
    {
        scanf("%d", &a[i]);
    }
    sum=asum(a);
    printf("The sum of elements of an array is %d.\n", sum);
    getch();
    return 0;
}
