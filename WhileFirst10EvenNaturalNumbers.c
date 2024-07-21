#include<stdio.h>
#include<conio.h>
int main()
{
    int x=2;
    while(x<=20 && x%2==0)
    {
        printf("%d\n", x);
        x=x+2;
    }
    getch();

    //OR

    x=1;
    while(x<=10)
    {
        printf("%d\n", x*2);
        x++;
    }
    getch();
}
