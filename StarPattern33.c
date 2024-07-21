#include <stdio.h>
#include <conio.h>


int main()
{
    int i, j, lines, rows, columns;
    char k='@';
    printf("Enter number of lines you want to print:\n");
    scanf("%d", &lines);
    printf("\n");
    rows = lines;
    columns = lines;
    for(i=1 ; i<=rows ; i++)
    {
       k=k+2*(i-1)+1;
        for(j=1 ; j<=columns ; j++)
        {
            if(j>=(lines+1)-i)
            {
                printf("%c ", k--);  
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