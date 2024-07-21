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
        k=k+i;
        for(j=1 ; j<=columns ; j++)
        {
            if(j<=i)
            {
                printf("%c ", k);
                k--;
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