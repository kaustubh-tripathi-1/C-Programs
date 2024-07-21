#include<stdio.h>
#include<conio.h>

int fibonacci(int n);

int fibonacci(int n)
{
    /* int a, b, c;
    a=0;
    b=1; */

    if(n==1)
    {
        return 0;
    }

    if(n==2)
    {
        return 1;
    }

    /* for( int i=3 ; i<=n ; i++ )
    {
        c=a+b;
        a=b;
        b=c;
    } */
   
    return fibonacci(n-1)+fibonacci(n-2);
}

int main()
{
    int n, term;

    printf("Enter the no. of term which you want to know in the Fabonacci Series :\n");
    scanf("%d", &n);

    while(n<=0)
    {
        printf("Enter a positive number greater than 0.\n");
        scanf("%d", &n);
    }

    term = fibonacci(n);
    printf("The %d term of Fibonacci series is %d\n", n, term);


    getch();
    return 0;

}
