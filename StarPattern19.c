#include <stdio.h>
#include <conio.h>


int main()
{
    int i, j, k, lines, l=0, rows, columns;
    printf("Enter number of line you want to print:\n");
    scanf("%d", &lines);
    printf("\n");
    rows = (2*lines)-1;
    columns = lines;
    for(i=1 ; i<=rows ; i++)
    {
        k=1;
        i<=lines?l++:l--;
        for(j=1 ; j<=columns ; j++)
        {
            if(j>=(lines+1)-l)
            {
                printf("%2d ", k);
                k++;
            } 
            else
                printf("   ");
        
        }
        printf("\n");
    }
    getch();
    return 0;

}