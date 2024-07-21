#include<stdio.h>
#include<conio.h>
int main()
{
    int i, n;
    printf("Enter the no. of squares of natural numbers to be printed in reverse order: \n");
    scanf("%d", &n);

    printf("Squares of  %d natural numbers in reverse order are - \n", n);
    for ( i=n; i>=1  ; i--)
    {
        printf("%d\n", i*i);
    }
    getch();
}
