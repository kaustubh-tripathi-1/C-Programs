#include<stdio.h>
#include<conio.h>
int main()
{
    int x;
    printf("Enter a number :\n");
    scanf("%d", &x);

    if ( x>0 )
        printf("Number is +ve\n");
    else if ( x<0 )
        printf("Number is -ve\n");
    else
        printf("Number is zero\n");
    getch();

}
