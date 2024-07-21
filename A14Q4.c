#include<stdio.h>
#include<conio.h>

int printNN (int);

int main()
{
    int i, n;
    printf("Enter the number of first Natural numbers to be printed : \n");
    scanf("%d", &n);
    printf("\n");
    printNN(n);
    getch();
}

int printNN( int n )
{
    int i;
    for ( i=1; i<=n; i++)
    {
        printf("%d\n", i);
    }
}
