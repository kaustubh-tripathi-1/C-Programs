#include <stdio.h>
#include <conio.h>


int main()
{
    int i, j, lines, k, rows, columns;
    printf("Enter number of line you want to print:\n");
    scanf("%d", &lines);
    printf("\n");
    rows = lines;
    columns = lines;
    for(i=1 ; i<=rows ; i++)
    {
        i<=(lines+1)/2?k++:k--;
        for(j=1 ; j<=columns ; j++)
        {
            if(i<=(lines+1)/2)
            {
                if(j==k)
                    printf("\\ ");
                else if (j==(lines+1)-k)
                    printf("/ ");
                else
                    printf("* ");
            }
            else
            {
                if(j==k)
                    printf("/ ");
                else if (j==(lines+1)-k)
                    printf("\\ ");
                else
                    printf("* ");
            }
        }
        printf("\n");
    }
    getch();
    return 0;

}