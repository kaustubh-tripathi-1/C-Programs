#include<stdio.h>
#include<conio.h>
int main()
{
    int year;
    printf("Enter the year :\n");
    scanf("%d", &year);

    if ( year % 4 == 0 )
        printf("Year is Leap\n");
    else
        printf("Year is not Leap\n");
    getch();
}
