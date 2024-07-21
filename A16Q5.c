#include<stdio.h>
#include<conio.h>
int main()
{
    int i, a[10], sn;
    printf("Enter 10 no.s\n");
    for( i=0; i < sizeof(a) / sizeof(a[0]); i++ )
    {
        scanf("%d", &a[i]);
    }
    sn=a[0];
    for( i=0 ; i < sizeof(a) / sizeof(a[0]) ; i++ )
    {
        if (a[i]<=sn)
        {
            sn=a[i];
        }
    }
    printf("Smallest number is : %d", sn);
    getch();
}
