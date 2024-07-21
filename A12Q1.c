#include <stdio.h>
#include <conio.h>

int main()
{
    long long int t1=0,t2=1, t3, n, i, j=3;
    printf("Enter the number of terms of Fabonacci series that you want to see : ");
    scanf("%lld", &n);

    printf("\n1 Term : %lld\n", t1); //Print 1st term
    printf("2 Term : %lld\n", t2);   //Print 2nd term
    for ( i = 3 ; i<=n ; i++)
    {
        t3=t1+t2;
        printf("%lld Term : %lld\n", j, t3);
        printf("%lld Term : %lld\n", j, t3);
        t1=t2;
        t2=t3;
        j++;
    }
    getch();
}
