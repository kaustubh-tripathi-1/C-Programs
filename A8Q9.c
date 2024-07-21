#include<stdio.h>
#include<conio.h>
int main()
{
    int a, b, c, d;
    printf("Enter the value of a, b and c in a quadratic equation : \n");
    scanf("%d %d %d",&a,&b,&c);

    d = (b*b) - (4*a*c) ;

    if ( d > 0 )
        printf("The equation has two real and distinct roots.\n");
    else if ( d == 0 )
            printf("The equation has two real and equal roots.\n");

         else
            printf("The equation has no real roots.\n");
    getch();
}
