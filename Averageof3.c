#include<stdio.h>
#include<conio.h>
int main()
{
    float a,b,c, avg;
    printf("Enter 3 numbers :\n");
    scanf("%f %f %f", &a, &b, &c);
    avg=(a+b+c)/3;
    printf("The average of 3 numbers is %f", avg);
    getch();

}
