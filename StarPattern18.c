#include <stdio.h>
#include <conio.h>


int main()
{
    int i, j, k, lines, rows, columns;
    printf("Enter number of line you want to print:\n");
    scanf("%d", &lines);
    printf("\n");
    rows = lines;
    columns = lines;
    for(i=1 ; i<=rows ; i++)
    {
        k=lines-i;
        for(j=1 ; j<=columns ; j++)
        {
            if(j<=(lines+1)-i)
            {
                printf("%2d ", k);
                k--;
            } 
            else
                printf("   ");
        
        }
        printf("\n");
    }
    getch();
    return 0;

}