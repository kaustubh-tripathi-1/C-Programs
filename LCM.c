#include <stdio.h>
#include <conio.h>

int lcm(int, int );
int lcm(int a, int b)
{
    /* int i=2, LCM=1;
    while( a>1 || b>1 )
    {
        if(a%i==0 || b%i==0)
        {
            if(a%i==0)
            {
                a/=i;
            }
            if(b%i==0)
            {
                b/=i;
            }
            LCM*=i;
        }
        else
            i++;
    }*/

    int i, LCM;
    for(LCM=a>b?a:b ; LCM<=a*b ; LCM=LCM+(a>b?a:b))
    {
        if(LCM%a==0 && LCM%b==0)
            break;
    }

    return LCM;
}


int main()
{
    int x, y, LCM;
    printf("Enter 2 numbers to calculate LCM :\n");
    scanf("%d%d", &x, &y);
    LCM=lcm(x, y);
    printf("LCM of %d & %d is %d.\n", x, y, LCM);
    getch();
    return 0;
}