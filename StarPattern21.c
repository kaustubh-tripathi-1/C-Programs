#include <stdio.h>
#include <conio.h>


int main()
{
    int i, j, lines, k=0, rows, columns;
    printf("Enter number of line you want to print:\n");
    scanf("%d", &lines);
    printf("\n");
    rows = lines;
    columns = lines;
    if(lines%2==0)
    {
        for(i=1 ; i<=rows ; i++)
        {
            if(i<=(lines/2))
                k++;
            if(i>(lines/2)+1)
                k--;
            for(j=1 ; j<=columns ; j++)
            {
                if(j<=((lines/2)+2)-k || j>=(lines/2+k))
                    printf("* ");
                else
                    printf("  ");
                
            }
            printf("\n");
        }
    }
    else
    {
        for(i=1 ; i<=rows ; i++)
        {
            i<=(lines+1)/2?k++:k--;
            for(j=1 ; j<=columns ; j++)
            {
                if(j<=((lines/2)+2)-k || j>=(lines/2+k))
                    printf("* ");
                else
                    printf("  ");
                
            }
            printf("\n");
        }
    }
    getch();
    return 0;

}