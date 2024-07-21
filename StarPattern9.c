#include <stdio.h>
#include <conio.h>


int main()
{
    int i, j, lines;
    printf("Enter number of line you want to print:\n");
    scanf("%d", &lines);
    printf("\n");
    for(i=1 ; i<=lines ; i++)
    {
        for(j=1 ; j<=lines ; j++)
        {
            if(j>=(lines+1)-i)
                printf(" *");
            else
                printf("  ");
        }
        printf("\n");
    }
    getch();
    return 0;

}