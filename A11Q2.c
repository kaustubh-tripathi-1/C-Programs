#include<stdio.h>
#include<conio.h>
int main()
{
    int i, n, x;
    printf("Enter the no. of first even natural numbers of which sum has to be calculated : \n");
    scanf("%d", &n);

    x = n*(n+1);
    printf("The sum of first %d even natural numbers is %d \n", n, x);
    getch();

}
