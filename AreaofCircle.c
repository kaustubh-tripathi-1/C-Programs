#include<stdio.h>
#include<conio.h>

#define PI 3.1428

float circlearea(float );

float circlearea(float r)
{
    float area;
    area = PI*r*r;
    return area;

}

int main()
{

    float r, area;
    printf("Enter the radius of Circle\n");
    scanf("%f", &r);
    area = circlearea(r);
    printf("Area of Circle with Radius %.1f is %.4f", r, area);
    getch();
    return 0;

}
