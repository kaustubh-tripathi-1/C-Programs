#include<stdio.h>
#include<conio.h>
int main()
{
    int x,y;
    printf("Enter a 3 digit number :\n");
    scanf("%d", &x);

    y=x/100;

    printf("The first digit of the 3 digit number is %d", y);
    getch();
}
