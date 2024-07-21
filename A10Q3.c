#include<stdio.h>
#include<conio.h>
int main()
{
    int i, n;
    printf("Enter the number of first Natural numbers to be printed in reverse order : \n");
    scanf("%d", &n);
    printf("\n");
    for ( i=n; i>=1; i--)
    {
        printf("%d\n", i);
    }
    getch();
}

