#include<stdio.h>
#include<conio.h>
int main()
{
    int i, n;
    for(i=1;i<=3;i++)
    {
        printf("Enter an Even number to win the game\n");
        scanf("%d", &n);
        if(n%2==0)
        {
            printf("You won\n");
            break;
        }
    }
    if(i==4)
        printf("You Lost\n");
    getch();
    return 0;
}
