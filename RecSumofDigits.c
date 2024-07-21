#include<stdio.h>
#include<conio.h>


int sumofDigits ( int n )
{
    /*int s=0;
    if( n==0 )
    {
        return 0;
    }
    else
    {
        s=n%10+sumofDigits(n/10);
    }

    return s;*/

    if(n>0)
    {

        return n%10+sumofDigits(n/10);

    }


}

int main()
{
    int k, n;
    printf("Enter value of k:");
    scanf("%d", &n);
    k = sumofDigits (n);
    printf("Sum of Digits of %d  is %d", n, k);
    getch();
    return 0;
}
