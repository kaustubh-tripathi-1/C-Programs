#include<stdio.h>
#include<conio.h>
int main()
{
    float l,b,h, volume;
    printf("Enter the values of length, breadth and height of the cuboid : \n");
    scanf("%f %f %f", &l, &b, &h);

    volume = l*b*h;
    printf("The Volume of the cuboid is : %f\n", volume);
    getch();
}
