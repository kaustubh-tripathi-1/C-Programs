#include<stdio.h>
#include<conio.h>

int nthterm[100];
int fibonacci( int );

int fibonacci( int n)
{
    if(nthterm[n-1]!=-1)
        return nthterm[n-1];
    if(n==1 || n==2)
        nthterm[n-1]=n-1;
    else
        nthterm[n-1]=fibonacci(n-1)+fibonacci(n-2);

    return nthterm[n-1];
}

int main()
{
    int n;

    printf("Enter the no. of terms up to which you want to print the Fibonacci Series :\n");
    scanf("%d", &n);

    for(int i=0 ; i<100 ; i++)
    {
        nthterm[i]=-1;
    }

    while(n<=0)
    {
        printf("Enter a positive number greater than 0.\n");
        scanf("%d", &n);
    }
    for( int i=1 ; i<=n ; i++)
    {
        printf("%d ", fibonacci(i));
    }

    getch();
    return 0;

}
