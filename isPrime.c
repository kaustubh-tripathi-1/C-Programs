#include<stdio.h>
#include<conio.h>

int Prime(int n);

int Prime(int n)
{
    if(n<=1)
    {
        return 0;
    }
    for(int j=2 ; j*j<=n ; j++)
    {
        if(n%j==0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int n, p;
    printf("Enter a number :\n");
    scanf("%d", &n);

    while(n<=0)
    {
        printf("Enter a non-Negative number.\n");
        scanf("%d", &n);
    }

    p=Prime(n);

    if(p==1)
    {
        printf("Prime.\n");
    }

    else
    {
        printf("Not Prime.\n");
    }

    getch();
    return 0;
}
