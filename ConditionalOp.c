#include<stdio.h>
#include<conio.h>
int main()
{
    int x;
    printf("Enter a number :\n");
    scanf("%d", &x);

    x>0?printf("Number is %d and +ve", x):printf("Number is non - positive");
    getch();

    //OR

    printf("\nEnter a number :\n");
    scanf("%d", &x);
    printf(x>0?"Number is +ve":"Number is non - positive");
    getch();
}
