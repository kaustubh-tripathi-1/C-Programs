#include <stdio.h>
#include <conio.h>


int main()
{
    int i, j, k=0, lines, rows, columns;
    printf("Enter number of line you want to print:\n");
    scanf("%d", &lines);
    printf("\n");
    rows = 2*lines-1;
    columns = lines;
    for(i=1 ; i<=rows ; i++)
    {
        i<=lines?k++:k--;
        for(j=1 ; j<=columns ; j++)
        {
            if(j<=k)
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