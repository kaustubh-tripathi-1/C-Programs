#include<stdio.h>
#include<conio.h>
int main()
{
    int i, n, x;
    printf("Enter the no. of first natural numbers of which sum has to be calculated : \n");
    scanf("%d", &n);

    x = n*(n+1) / 2;
    printf("The sum of %d first natural numbers is %d\n", n, x);
    getch();

}
