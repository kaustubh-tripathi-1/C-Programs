9#include<stdio.h>
#include<conio.h>
int main()          //Print first n odd natural numbers in reverse order
{
    int n, i=1;
    printf("Enter the value of n:\n");
    scanf("%d", &n);
    while(i<=n)
    {
       printf("%d\n", 2*n+1-2*i);
       i++;
    }
    getch();
}
