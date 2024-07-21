#include<stdio.h>
#include<conio.h>

int eveodd (int);

int main()
{
    int x, y;
    printf("Enter a number:\n");
    scanf("%d", &x);
    y=eveodd( x );

    if(y)
    {
        printf("Number is Even");
    }
    else
    {
        printf("Number is Odd");
    }
    getch();
}

int eveodd( int x )
{
    int y;

    if( x%2 == 0 )
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
