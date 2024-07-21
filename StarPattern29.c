#include <stdio.h>
#include <conio.h>


int main()
{
    int i, j, lines, rows, columns, k=0, l=0;
    printf("Enter number of line you want to print:\n");
    scanf("%d", &lines);
    printf("\n");
    rows = lines;
    columns = lines;
    for(i=1 ; i<=rows ; i++)
    {
        i<=(lines/2+1)?k++:k--;
        l=k-1;
        for(j=1 ; j<=columns ; j++)
        {
            if(j>=(lines/2+2)-k && j<=(lines/2)+k)
            {
                printf("%d ", l%10);
                j<(lines/2+1)?l++:l--;
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
        l++;l++;
    }
    getch();
    return 0;
}