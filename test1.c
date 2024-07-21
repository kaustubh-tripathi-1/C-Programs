#include<stdio.h>
#include<conio.h>

int GCD(int, int );

int GCD(int a, int b)
{
    if(b==0)
    {
        return a;
    }
    return GCD(b, a%b);
}

int main()
{
    int x, y, gcd;
    printf("Enter 2 numbers to check their GCD/HCF:\n");
    scanf("%d%d", &x, &y);
    gcd = GCD(x, y);
    printf("GCD/HCF of %d & %d is %d.", x, y, gcd);
    getch();
    return 0;
}