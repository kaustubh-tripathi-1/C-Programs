#include<stdio.h>
#include<conio.h>
int main()
{
    int i, n, sum=0;
    printf("Enter the value of n so that sum of those natural numbers can be printed :");
    scanf("%d", &n);

    for(i=1;i<=n;i++)
    {
        sum=sum+i;
    }

    printf("The sum of %d natural numbers is %d", n, sum);
    getch();
}
