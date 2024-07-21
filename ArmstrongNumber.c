#include<stdio.h>
#include<conio.h>

int digits(int );
int powerOf(int , int);
int armstrong(int );

int main()
{
    int n;
    printf("Enter a number to check if it's armstrong or not:\n");
    scanf("%d", &n);
    

    if(armstrong(n))    
    {
        printf("%d is an armstrong number.", n); 
    }

    else
    {
        printf("%d is not an armstrong number.", n);
    }
    getch();
    return 0;
}


int digits(int n)
{
    int di=0;
    if(n==0)
        return 1;
    while(n>0)
    {
        di++;
        n/=10;
    }
    return di;

}


int powerOf(int n, int power)
{
    int result=1;
    if(power==0)
        return 1;
    if(power==1)
        return n;
    for(int i=0 ; i<power ; i++)
    {
        result*=n;
    }
    return result;
}

int armstrong(int n)
{
    int result=0, d=digits(n), original=n;
    /*for(int i=0 ; i<d ; i++)
    {   

        result += powerOf(n%10, d);
        n/=10;
    }*/

   while(n>0)
   {
         result += powerOf(n%10, d);
        n/=10;
   }

    if(result==original)
        return 1;
    return 0;

}

