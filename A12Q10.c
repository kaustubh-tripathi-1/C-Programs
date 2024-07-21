#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j, lines, k;
    printf("Enter how many lines you want to print:\n");
    scanf("%d", &lines);
    for(i=1;i<=lines;i++)
    {
        k=5;
        for(j=1;j<=lines;j++)
        {
            if ( j<=(lines+1)-i )
                printf("%d\t", k--);
            else
                printf(" ");
        }
        printf("\n");
    }
    getch();
}
