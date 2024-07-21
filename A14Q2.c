#include<stdio.h>
#include<conio.h>

float simpint( float, float, float );

int main()
{
    float si, p, r, t;
    printf("Enter the principal amount, rate of interest and time respectively : \n");
    scanf("%f %f %f", &p, &r, &t);
    si = simpint( p, r, t);
    printf("The Simple Interest is %f", si);
    getch();
    return 0;
}

float simpint(float p, float r, float t)
{
    float si;
    si=(p*r*t)/100;
    return si;
}
