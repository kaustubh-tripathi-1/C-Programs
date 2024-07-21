#include<stdio.h>
#include<conio.h>
int main()
{
    int i, n;
    printf("Enter the no. of odd natural numbers to be printed : \n");
    scanf("%d", &n);

    printf("First %d odd natural numbers are - \n", n);
    for ( i=1; i <= (2*n)-1 ; i+=2)
    {
        printf("%d\n", i);
    }
    getch();
}
