#include<stdio.h>
#include<conio.h>
int main()
{
    int i, n;
    printf("Enter the no. of even natural numbers to be printed in reverse order : \n");
    scanf("%d", &n);

    printf("First %d even natural numbers are - \n", n);
    for ( i=2*n; i>=2; i-=2)
    {
        printf("%d\n", i);
    }
    getch();
}
