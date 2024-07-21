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
    getch();

    int y;
    printf("\n\nEnter a number:\n");
    scanf("%d", &y);

    if(x%2) //only one operator is being used, 20%5==0, so a zero value means the condition is false
    {
        printf("Number is Odd");
    }


    else
    {
        printf("Number is  Even");
    }
    getch();
}
