#include<stdio.h>
#include<conio.h>
int main()
{
    int x, ld;
    printf("Enter a number:\n");
    scanf("%d", &x);

    ld=x%10;

    printf("The last digit of %d is %d", x, ld);
    getch();
}
