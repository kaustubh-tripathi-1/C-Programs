#include<stdio.h>
#include<conio.h>
int main()
{
    int x;
    printf("Enter a number:\n");
    scanf("%d", &x);

    if(x%3==0 || x%7==0)
    {
        printf("Number is Divisible by 3 or 7");
    }
    else
    {
        printf("Number is not Divisible by 3 or 7");
    }
    getch();
}
