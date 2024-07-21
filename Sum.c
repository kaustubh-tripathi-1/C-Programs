#include<stdio.h>
#include<conio.h>
int sum();


int sum()
{
    int a,b,c;
    printf("Enter two numbers: \n");
    scanf("%d %d", &a, &b);
    c=a+b;
    return c;
}


int main()
{

    int s;
    s = sum();
    printf("Sum is %d", s);
    getch();
    return 0;
}
