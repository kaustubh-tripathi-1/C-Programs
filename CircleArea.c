#include<stdio.h>
#include<conio.h>
int main()
{
    double r,a, pi=3.14;
    printf("Enter the radius of circle :\n");
    scanf("%lf", &r);
    a=pi*r*r;
    printf("The area of the circle is %lf", a);
    getch();
}
