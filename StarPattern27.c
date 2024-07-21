#include <stdio.h>
#include <conio.h>


int main()
{
    int i, j, lines, rows, columns, k;
    printf("Enter number of line you want to print:\n");
    scanf("%d", &lines);
    printf("\n");
    rows = lines;
    columns = 2*lines-1;
/*     for(i=1 ; i<=rows ; i++)
    {
        for(j=1 ; j<=columns ; j++)
        {
            if(j<=i)
            {
                if(j%2==0)
                    printf("0 ");
                else
                    printf("1 ");
            }
            else
                printf("  ");
        }
        printf("\n");
    } */

    for(i=1 ; i<=rows ; i++)
    {
        k=1;
        for(j=1 ; j<=columns ; j++)
        {
            if(j<=i)
            {
                printf("%d ", k);
                k=1-k;
            }
            else
                printf("  ");
        }
        printf("\n");
    }
    getch();
    return 0;

}