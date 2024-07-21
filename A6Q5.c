#include<stdio.h>
#include<conio.h>
main()
{
    int a,b,c;
    printf("Enter the value of a:\n");
    scanf("%d", &a);
    printf("Enter the value of b:\n");
    scanf("%d", &b);
    c=a;
    a=b,
    b=c;
    printf("The value of a = %d and value of b = %d", a,b);
    getch();
}
