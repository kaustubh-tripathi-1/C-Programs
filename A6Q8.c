#include<stdio.h>
#include<conio.h>
int main()
{
    int x, y;
    printf("Enter a number :\n");
    scanf("%d", &x);
    printf("Enter a digit :\n");
    scanf("%d", &y);

    x=x*10;
    x=x+y;

    printf("The resulting number with the appended digit is %d", x);
    getch();

}
