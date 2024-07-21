#include<stdio.h>
#include<conio.h>

int countDigits(int );
int countDigits(int n)
{
    int count=0;

    if(n>0)
    {
        return 1+countDigits(n/10);
    }

    
    
}

int main()
{
    int x, c;
    printf("Enter a number to count digits :\n");
    scanf("%d", &x);
    if(x==0)
        c=1;
    else
        c = countDigits(x);
    printf("%d has %d Digits.", x, c);
    getch();
    return 0;
}