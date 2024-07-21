#include<stdio.h>
#include<conio.h>
int main()
{
    int i, a[10], sum=0;
    printf("Enter 10 no.s to calculate Sum\n");
    for( i=0; i<10; i++)
    {
        scanf("%d", &a[i]);
    }
    for( i=0; i<10; i++)
    {
        sum+=a[i];
    }
    printf("The Sum of 10 no.s entered by you is : %d\n", sum);
    getch();
}
