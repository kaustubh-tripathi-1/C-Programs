#include<stdio.h>
#include<conio.h>

int main()
{
    int x=689079779.786798,y;
    y=sizeof(x);
    printf("%d",y);
    getch();
    y=sizeof(double);
    printf("\n%d",y);
    getch();
    y=sizeof(78321);
    printf("\n%d",y);
    getch();
    y=sizeof(char);
    printf("\n%d",y);
    getch();
}
