#include <stdio.h>
#include <conio.h>


int main()
{
    int i, j, lines, rows, columns;
    printf("Enter number of line you want to print:\n");
    scanf("%d", &lines);
    printf("\n");
    rows = lines;
    columns = 2*lines-1;
    for(i=1 ; i<=rows ; i++)
    {
        for(j=1 ; j<=columns ; j++)
        {
            if(j>=i && j<=2*lines-i)
            {
                printf("* ");
            } 
            else
                printf("  ");
        
        }
        printf("\n");
    }
    getch();
    return 0;

}