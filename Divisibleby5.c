#include<stdio.h>
#include<conio.h>
int main()
{
    int x;
    printf("Enter a number:\n");
    scanf("%d", &x);

    if(x%5==0) //2 operators % and == are being used
    {
        printf("Number is Divisible by 5");
    }
    else
    {
        printf("Number is not Divisible by 5");
    }
    getch();

    int y;
    printf("\nEnter a number:\n");
    scanf("%d", &y);

    if(x%5) //only one operator is being used, 20%5==0, so a zero value means the condition is false
    {
        printf("Number is not Divisible by 5");
    }


    else
    {
        printf("Number is  Divisible by 5");
    }
    getch();
}
