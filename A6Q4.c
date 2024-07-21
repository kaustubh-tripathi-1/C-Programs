#include<stdio.h>
#include<conio.h>
int main()
{
    int x, y, z;
    printf("Enter a 3 digit number :\n");
    scanf("%d", &x);

    y=x/10;
    z=y%10;
    printf("The middle digit of the 3 digit number is %d", z);
    getch();
}
