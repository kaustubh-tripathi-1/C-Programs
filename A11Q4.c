#include<stdio.h>
#include<conio.h>
int main()
{
    int i, n, x=0;
    printf("Enter the no. of first natural numbers of which sum of squares has to be calculated : \n");
    scanf("%d", &n);

    for( i=1 ; i<=n ; i++ )
    {
        x += i * i ;
    }

    printf("The sum of squares of first %d natural numbers is %d \n", n, x);
    getch();

}
