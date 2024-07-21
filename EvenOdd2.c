#include<stdio.h>
#include<conio.h>
int main()
{
    int x;
    printf("Enter a number:\n");
    scanf("%d", &x);

    if(x%2==0) //2 operators % and == are being used
    {
        printf("Number is Even");
    }
    else
    {
        printf("Number is Odd");
    }


    int y;
    printf("\n\nEnter a number:\n");
    scanf("%d", &y);

    if(y%2) //only one operator is being used, 20%5==0, so a zero value means the condition is false
    {
        printf("Number is Odd");
    }


    else
    {
        printf("Number is  Even");
    }

    printf("\n\nEnter a number:\n");
    scanf("%d", &x);

    if(x/2*2==x) // if the number is perfect integer, then we multiply it again by 2, result will be x again.
    {
        printf("Number is Even");
    }
    else
    {
        printf("Number is Odd");
    }

    printf("\n\nEnter a number:\n");
    scanf("%d", &x);

    if(x&1) //& of 2 Odd numbers is always even
    {
        printf("Number is Odd");
    }
    else
    {
        printf("Number is Even");
    }


    getch();
    return 0;
}
