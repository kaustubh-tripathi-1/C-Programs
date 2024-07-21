#include<stdio.h>
#include<conio.h>
int main()
{
    float l, b, area;
    printf("Enter the length of rectangle :\n");
    scanf("%f", &l);
    printf("Enter the Breadth of rectangle :\n");
    scanf("%f", &b);

    area = l*b;
    printf("The area of the rectangle is %f\n", area);
    getch();

}
