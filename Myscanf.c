#include<stdio.h>
#include<conio.h>

void myscanf( int *, int);

void myscanf( int *x, int y)
{

    *x=y;
}

int main()
{
    int a;
    printf("Enter a number :\n");
    myscanf(&a, 16);
    printf("Value of a is %d.\n", a);
    getch();
    return 0;
}
