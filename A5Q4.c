#include<stdio.h>
#include<conio.h>
int main()
{
    float si, p, r, t;
    printf("Enter the Principal Amount, ROI & Time Period :\n");
    scanf("%f%f%f", &p, &r, &t);

    si=(p*r*t)/100;

    printf("\n\nThe Simple interest is %f", si);
    getch();
}
