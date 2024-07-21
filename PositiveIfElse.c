#include<stdio.h>
#include<conio.h>
int main()
{
    int x;
    printf("Enter a number :\n");
    scanf("%d", &x);

    if (x>0)
    {
        printf("Number is %d and +ve", x);
    }
    else
    {
        printf("Number is non - positive");
    }
    getch();
}
