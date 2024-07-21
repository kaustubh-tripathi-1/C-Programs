#include<stdio.h>
#include<conio.h>

int perm (int, int);
int fact (int);
int main()
{
    int n, r, p, n1, r1, f;
    printf("Enter the value of n and r : \n");
    scanf("%d%d", &n, &r);
    n1 = fact (n);
    r1 = fact (r);
    p = perm(n,r);
    printf ("The number of permutations are %d", p);
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

int perm ( int n, int r )
{
    int n1 = fact(n);
    int r1 = fact(r);
    int p = n1 / r1;
    return p;
}
