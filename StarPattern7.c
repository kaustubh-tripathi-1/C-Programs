#include <stdio.h>
#include <conio.h>


int main()
{
    int i, j, k=1, lines;
    printf("Enter number of line you want to print:\n");
    scanf("%d", &lines);
    for(i=1 ; i<=lines ; i++)
    {
        for(j=1 ; j<=(2*lines-1) ; j++)
        {
            if(j>=(lines+1)-i && j<=i+(lines-1))
                printf("%d ", k);
            else
                printf("  ");
        }
        k++;
        printf("\n");
    }
    getch();
    return 0;

}