#include<stdio.h>
#include<conio.h>
double carea( double, double );

int main()
{
    double r, a, z;
    printf("Enter the radius of circle :\n");
    scanf("%lf", &r);
    a = carea( r, a );
    printf("The area of circle is : %lf", a);
    getch();
    return 0;
}

double carea( double r, double a )
{
    double pi=3.14;
    a=pi*r*r;
    return a;
}
