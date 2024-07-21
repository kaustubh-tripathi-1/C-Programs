#include <stdio.h>
#include <conio.h>


int main()
{
    int i, j, lines, rows, columns;
    char k;
    printf("Enter number of line you want to print:\n");
    scanf("%d", &lines);
    printf("\n");
    rows = lines;
    columns = (2*lines)-1;
    for(i=1 ; i<=rows ; i++)
    {
        k='A';
        for(j=1 ; j<=columns ; j++)
        {
            if(j>=(lines+1)-i && j<=(lines-1)+i)
            {
                printf("%c ", k);
                (j<lines)?k++:k--;
            }
            else
                printf("  ");
            
        }
        printf("\n");
    }
    getch();
    return 0;

}