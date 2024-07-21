#include<stdio.h>
#include<conio.h>

int comb (int, int);
int fact (int);
int main()
{
    int n, r, c, n1, r1, n2, f;
    printf("Enter the value of n and r : \n");
    scanf("%d%d", &n, &r);
    n1 = fact (n);
    r1 = fact (r);
    c = comb(n,r);
    printf ("The number of combinations are %d", c);
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

int comb ( int n, int r )
{
    int n1 = fact(n);
    int r1 = fact(r);
    int n2 = fact(n - r);
    int c = n1 / (r1 * n2);
    return c;
}
