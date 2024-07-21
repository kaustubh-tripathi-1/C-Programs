#include<stdio.h>
#include<conio.h>
int main()
{
    int x=10;
    while(x)
    {
        printf("%d", x);
        x-1;                    //x is not being decremented as the value is not being assigned.
    }
    getch();
}
