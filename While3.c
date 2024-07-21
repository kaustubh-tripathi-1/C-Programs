#include<stdio.h>
#include<conio.h>
int main()
{
    int n, i;
    printf("Enter the value of n:\n");
    scanf("%d", &n);
    i=n;
    while(i<=n && i>0)
    {
        if(i%2!=0)
        {
            printf("%d\n", i);
        }
        else
        {
            printf(" ");
        }
        i--;
    }
    getch();
}
