#include<stdio.h>
#include<conio.h>

double powerOf ( double, double );

double powerOf ( double x, double y )
{
    double z;
    if(y==0)
        return 1;
    if(y>0)
        return x*powerOf(x,y-1);
    else
        return 1/x*powerOf(x,y+1);
}

int main ()
{
    double x, y;
    double power;

    printf("Enter values of x and y -\n");
    scanf("%lf%lf", &x, &y);
    power = powerOf(x,y);

    printf("%.0lf to the power of %.0lf is %.4lf.", x, y, power);
    getch();
    return 0;

}
