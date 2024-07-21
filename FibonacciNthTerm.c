#include<stdio.h>
#include<conio.h>

int fibonacci(int n);

int fibonacci(int n)
{
    int a, b, c;
    a=0;
    b=1;

    if(n==1)
    {
        return 0;
    }

    if(n==2)
    {
        return 1;
    }

    for( int i=3 ; i<=n ; i++ )
    {
        c=a+b;
        a=b;
        b=c;
    }
    return c;
}

int main()
{
    int n, term;

    printf("Enter the no. of term  you want to print of the Fibonacci Series :\n");
    scanf("%d", &n);

    if(n<=0)
    {
        printf("Enter a positive number greater than 0.\n");
    }
    else
    {
        term = fibonacci(n);
        printf("The %d term of Fibonacci series is %d\n", n, term);
    }


    getch();
    return 0;

}
