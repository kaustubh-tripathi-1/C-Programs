#include<stdio.h>
#include<conio.h>

int fibonacci(int);
void printFibonacci(int);
int fibonacci(int n)
{

    int a;
    if(n==1)
    {
        return 0;
    }

    if(n==2)
    {
        return 1;
    }

    return fibonacci(n-1)+fibonacci(n-2);

}

void printFibonacci(int n)
{
    for(int i=1 ; i<=n ; i++)
        printf("%d\t", fibonacci(i));

}  

int main()
{
    int n, term;

    printf("Enter the no. of term up to which you want to print the Fabonacci Series :\n");
    scanf("%d", &n);

    while(n<=0)
    {
        printf("Enter a positive number greater than 0.\n");
        scanf("%d", &n);
    }

    printFibonacci(n);
    getch();
    return 0;

}
