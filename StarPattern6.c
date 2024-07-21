#include <stdio.h>
#include <conio.h>


int main()
{
    int i, j, k, lines;
    printf("Enter number of line you want to print:\n");
    scanf("%d", &lines);
    k=lines;
    for(i=1 ; i<=lines ; i++)
    {
        for(j=1 ; j<=lines ; j++)
        {
            if(j<=((lines+1)-i))
                printf("%d\t", k);
            else
                printf(" ");
        }
        k--;
        printf("\n");
    }
    getch();
    return 0;
}