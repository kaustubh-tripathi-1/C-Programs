#include<stdio.h>
#include<conio.h>
int main()
{
    int i, n;
    printf("Enter the no. of squares of natural numbers to be printed : \n");
    scanf("%d", &n);

    printf("Squares of  %d natural numbers are - \n", n);
    for ( i=1; i<=n  ; i++)
    {
        printf("%d\n", i*i);
    }
    getch();
}
