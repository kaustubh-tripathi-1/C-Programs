#include <stdio.h>
#include <conio.h>

void factors(unsigned int );

void factors(unsigned int n)
{
    for (int i=1 ; i<=n ; i++)
    {
        if(n%i==0)
        {
            printf("%d ", i);
        }
    }
}

int main()
{
    unsigned int n;
    printf("Enter a Natural number to display its factors :\n");
    scanf("%u", &n);
    while(n<1)
    {
        printf("Enter a Natural number!! i.e. 1-n \n");
        scanf("%u", &n);
    }
    factors(n);
    getch();
    return 0;
}
