#include<stdio.h>
#include<conio.h>
int main()
{
    int x;
    printf("Enter the month number : \n");
    scanf("%d", &x);

    if ( x == 1 )
        printf("January - The number of days are 31\n");
    else if ( x == 2 )
        printf("February - The number of days are 28\n");
    else if ( x == 3 )
        printf("March - The number of days are 31\n");
    else if ( x == 4 )
        printf("April - The number of days are 30\n");
    else if ( x == 5 )
        printf("May - The number of days are 31\n");
    else if ( x == 6 )
        printf("June - The number of days are 30\n");
    else if ( x == 7 )
        printf("July - The number of days are 31\n");
    else if ( x == 8 )
        printf("August - The number of days are 31\n");
    else if ( x == 9 )
        printf("September - The number of days are 30\n");
    else if ( x == 10 )
        printf("October - The number of days are 31\n");
    else if ( x == 11 )
        printf("November - The number of days are 30\n");
    else if ( x == 12 )
        printf("December - The number of days are 31\n");
    else
        printf("Month Number entered is not valid\n  ");
    getch();
}
