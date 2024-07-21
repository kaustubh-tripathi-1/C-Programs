#include<stdio.h>
#include<conio.h>
int main()
{
    int x=2;
    while(x<100 && x%1==0 && x%x==0)
    {

        printf("%d\n", x);
        x++;
    }
    getch();
}
