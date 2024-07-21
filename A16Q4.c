#include<stdio.h>
#include<conio.h>
int main()
{
    int i, a[10], gn;
    printf("Enter 10 no.s\n");
    for( i=0; i < sizeof(a) / sizeof(a[0]); i++ )
    {
        scanf("%d", &a[i]);
    }
    gn=a[0];
    for( i=0 ; i < sizeof(a) / sizeof(a[0]) ; i++ )
    {
        if (a[i]>=gn)
        {
            gn=a[i];
        }
    }
    printf("Greatest number is : %d", gn);
    getch();
}
