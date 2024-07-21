#include<stdio.h>
#include<conio.h>
int main()
{
    long long int x;
    int y=0;
    printf("Enter the number to count the number of digits : \n");
    scanf("%lld", &x);

    while ( x != 0 )
    {
        x /= 10;
        y++;
    }

    printf("The number of digits in the entered number is/are %d.\n", y);
    getch();
}
