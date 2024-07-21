#include <stdio.h>
#include <conio.h>

int hcf(int, int );
int hcf(int a, int b)
{
    int i=2,HCF;
    while(i<=a/2 || i<=b/2)
    {
        if(a%i==0 && b%i==0)
        {
            HCF=i;
        }
        i++;
    }
    return HCF;
}

int main()
{
    int x, y, HCF;
    printf("Enter 2 numbers to calculate HCF :\n");
    scanf("%d%d", &x, &y);
    HCF=hcf(x, y);
    printf("HCF of %d & %d is %d.\n", x, y, HCF);
    getch();
    return 0;
}