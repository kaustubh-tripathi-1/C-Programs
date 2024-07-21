#include<stdio.h>
#include<conio.h>

void fibonacci(int n);

void fibonacci(int n)
{
    int a, b, c;
    a=0;
    b=1;

    if(n>=1)
    {
        printf("%d\t", a);
    }

    if(n>=2)
    {
        printf("%d\t", b);
    }

    for( int i=3 ; i<=n ; i++ )
    {
        c=a+b;
        printf("%d\t", c);
        a=b;
        b=c;
    }
}

int main()
{
    int n;

    printf("Enter the no. of term upto which you want to print the Fabonacci Series :\n");
    scanf("%d", &n);

    if(n<=0)
    {
        printf("Enter a positive number greater than 0.\n");
    }
    else
    {
        fibonacci(n);

    }

    getch();
    return 0;

}
