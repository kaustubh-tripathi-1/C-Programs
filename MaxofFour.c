#include <stdio.h>
#include <conio.h>

int max_of_four(int, int, int , int);

int max_of_four(int a, int b, int c, int d)
{
    if (a>=b && a>=c && a>=d )
    {
        return a;
    }
    else if (b>=c && b>=d)
    {
        return b;
    }
    else if(c>=d)
    {
        return c;
    }
    else
    {
        return d;
    }
}

int main()
{
    int a, b, c, d, max;
    scanf("%d%d%d%d", &a, &b, &c, &d);

    max = max_of_four(a,b,c,d);

    printf("%d", max);

    getch();
    return 0;


}
