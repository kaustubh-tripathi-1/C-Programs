#include<stdio.h>
#include<conio.h>
int main()
{
    float x, y, z;
    printf("Enter the sides of a triangle : \n");
    scanf("%f %f %f", &x, &y, &z);

    if ( (x+y) > z && (x+z) > y && (y+z) > x )
        printf("The triangle is valid\n");
    else
        printf("The triangle is not valid\n");
    getch();
}
