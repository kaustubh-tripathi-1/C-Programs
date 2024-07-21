#include <stdio.h>
#include <conio.h>


int main()
{
    int i, j, lines, rows, columns, k;
    printf("Enter number of line you want to print:\n");
    scanf("%d", &lines);
    printf("\n");
    rows = lines;
    columns = lines;
    for(i=1 ; i<=rows ; i++)
    {
        k=1;
        for(j=1 ; j<=columns ; j++)
        {
            if((i==1 || i==7 || j==1 || j==7) || (i>=3 && i<=5 && j>=3 && j<=5) && (i==3 || i==5 || j==3 ||j==5))
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    getch();
    return 0;

}