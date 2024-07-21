#include<stdio.h>
#include<conio.h>

int fact (int);

int main()
{
    int n, f=1;
    printf("Enter the number of which factorial is to be printed : \n");
    scanf("%d", &n);
    f = fact(n);
    printf ("The factorial of %d is %d.", n, f);
    getch();
}

int fact ( int n )
{
    int f=1;
    if ( n == 0 || n == 1 )
    {
        return 1;
    }

    else
    {
        for ( int i = n ; i >= 1 ; i--)
        {
            f*=i;
        }
        return f;
    }

}
