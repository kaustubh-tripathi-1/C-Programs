#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main()
{
    double r,area, pi=3.14;
    float l, b, a;
    float d, e, f, average;
    int x;
    while (x!=4)
    {
        printf("Enter which operation do you want to perform? :\n");
        printf("1. Calculate the area of Circle\n");
        printf("2. Calculate the area of Rectangle\n");
        printf("3. Calculate the average of 3 numbers\n");
        printf("4. Exit\n");
        scanf("%d", &x);

        switch(x)
        {
        case 1:
            printf("Enter the radius of circle :\n");
            scanf("%lf", &r);
            area=pi*r*r;
            printf("The area of the circle is %lf", area);
            break;
        case 2:
            printf("Enter the Length & Breadth of the rectangle :\n");
            scanf("%f %f", &l, &b);
            a=l*b;
            printf("The area of rectangle is %f\n", a);
            break;
        case 3:
            printf("Enter 3 numbers to calculate their average:\n");
            scanf("%f %f %f", &d, &e, &f);
            average = (d+e+f)/3;
            printf("The average of %f, %f, %f is %f\n", d, e, f, average);
            break;
        case 4:
            exit(0);
        default:
            printf("You entered the wrong choice\n");
        } //end of switch
    } //end of while
    getch();
}
