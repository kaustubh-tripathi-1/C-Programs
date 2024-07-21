#include<stdio.h>
#include<conio.h>
int main()
{
    float a, b, c, d, e, result;
    printf("Enter the marks of Physics : \n");
    scanf("%f", &a);
    printf("Enter the marks of Chemistry : \n");
    scanf("%f", &b);
    printf("Enter the marks of Biology : \n");
    scanf("%f", &c);
    printf("Enter the marks of Maths : \n");
    scanf("%f", &d);
    printf("Enter the marks of Computer : \n");
    scanf("%f", &e);

    result = ( ( a+b+c+d+e ) / 500 ) * 100;

    if ( result >= 90 )
        printf("Your Grade is A\n");
    else if ( result >= 80 )
        printf("Your Grade is B\n");
    else if ( result >= 70 )
        printf("Your Grade is C\n");
    else if ( result >= 60 )
        printf("Your Grade is D\n");
    else if ( result >= 40 )
        printf("Your Grade is E\n");
    else
        printf("Your Grade is F\n");

        getch();
}
