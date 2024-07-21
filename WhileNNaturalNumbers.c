#include<stdio.h>
#include<conio.h>
int main()
{
    int x=1, n;
    printf("Enter the value of n :\n");
    scanf("%d", &n);
    while(x<=n)
    {
        printf("%d\n", x);
        x++;
    }
    getch();
}
