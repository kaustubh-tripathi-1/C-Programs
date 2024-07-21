#include<stdio.h>
#include<conio.h>
int main()
{
    int i, n;
    printf("Enter the number of first Natural numbers to be printed : \n");
    scanf("%d", &n);
    printf("\n");
    for ( i=1; i<=n; i++)
    {
        printf("%d\n", i);
    }
    getch();
}
