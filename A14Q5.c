#include<stdio.h>
#include<conio.h>

int printNN (int);

int main()
{
    int n;
    printf("Enter the number of first odd Natural numbers to be printed : \n");
    scanf("%d", &n);
    printf("\n");
    printNN(n);
    getch();
}

int printNN( int n )
{
    for ( int i=1; i <= (2*n)-1; i+=2)
    {
        printf("%d\n", i);
    }
}
