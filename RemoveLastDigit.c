#include<stdio.h>
#include<conio.h>
int main()
{
    int x, rd, y;
    printf("Enter a number:\n");
    scanf("%d", &x);

    rd=x/10;

    printf("The new number w/d last digit is %d", rd);
    getch();


    //or if you don't want to use a 2nd var & want to assign the new value to x-

    printf("\n\nEnter a number:\n");
    scanf("%d", &y);

    y/=10;

    printf("The new number w/d last digit is %d", y);
    getch();
}
