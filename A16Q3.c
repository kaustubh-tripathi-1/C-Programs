#include<stdio.h>
#include<conio.h>
int main()
{
    int i, a[10], sumeve=0, sumodd=0;
    printf("Enter 10 no.s\n");
    for( i=0; i<=9; i++ )
    {
        scanf("%d", &a[i]);
    }
    for( i=0; i<=9; i++ )
    {
        if ((a[i])%2==0)
        {
            sumeve+=a[i];
        }
        else
        {
            sumodd+=a[i];
        }
    }
    printf("Sum of Even numbers is : %d\n", sumeve);
    printf("Sum of Odd numbers is : %d\n", sumodd);
    getch();
}
