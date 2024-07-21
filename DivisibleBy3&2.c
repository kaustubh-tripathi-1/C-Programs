#include<stdio.h>
#include<conio.h>
int main()
{
    int x;
    printf("Enter a number:\n");
    scanf("%d", &x);

    if(x%2==0 && x%3==0)
    {
        printf("Number is Divisible by 2 and 3");
    }
    else
    {
        printf("Number is not Divisible by 2 and 3");
    }
    getch();
}
