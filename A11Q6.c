#include<stdio.h>
#include<conio.h>
int main()
{
    int i, n, x=1;
    printf("Enter the number to calculate its factorial : \n");
    scanf("%d", &n);

    for ( i=n ; i >= 1 ; i--)
    {
        if( n == 0 || n == 1 )
            printf (" The factorial is 1");
        else
            x *= i;
    }

    printf("The factorial of %d is %d.\n", n, x);
    getch();
}
