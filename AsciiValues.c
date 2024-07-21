#include<stdio.h>
#include<conio.h>
int main()
{
    char x;
    printf("Enter a char to print its ASCII Value :\n");
    scanf("%c", &x);

    printf("ASCII Value of %c is %d", x, x);
    getch();
}
