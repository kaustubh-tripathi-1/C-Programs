#include<stdio.h>
#include<conio.h>
main()
{
    int a;
    printf("Enter a number : \n");
    scanf("%d", &a);
    printf("The last digit of the number is : %d", a%10);
    getch();
}
