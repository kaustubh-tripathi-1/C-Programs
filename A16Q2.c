#include<stdio.h>
#include<conio.h>
int main()
{
    int i, a[10], sum=0;
    float avg;
    printf("Enter 10 no.s to calculate Average\n");
    for( i=0; i<=9; i++)
    {
        scanf("%d", &a[i]);
    }
    for( i=0; i<=9; i++)
    {
        sum+=a[i];
    }
    avg=sum/10.0    ;
    printf("The average of 10 no.s entered by you is : %f\n", avg);
    getch();
}
