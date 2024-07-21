#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b;
    printf("Enter the value of a:\n");
    scanf("%d", &a);
    printf("Enter the value of b:\n");
    scanf("%d", &b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("The value of a = %d and value of b = %d", a,b);
    getch();
    return 0;
}
