#include<stdio.h>
#include<conio.h>
int main()
{
    int i, n;
    printf("Enter the no. of cubes of natural numbers to be printed : \n");
    scanf("%d", &n);

    printf("Cubes of  %d natural numbers are - \n", n);
    for ( i=1; i<=n  ; i++)
    {
        printf("%d\n", i*i*i);
    }
    getch();
}
