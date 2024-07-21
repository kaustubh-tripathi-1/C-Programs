#include<stdio.h>
#include<conio.h>
int main()
{
    int x, y, r;
    printf("Enter 2 numbers : ");
    scanf("%d %d", &x, &y);
    r=x<y;
    printf("Result of %d<%d is %d", x,y,r);
    getch();

    r=x>y;
    printf("\n%d", r);
    getch();

    r=x>=y;
    printf("\n%d", r);
    getch();

    r=x<=y;
    printf("\n%d", r);
    getch();

    r=x==y;
    printf("\n%d", r);
    getch();

    r=x!=y;
    printf("\n%d", r);
    getch();

    r=5>4>0;
    printf("\n%d", r);
    getch();
}
