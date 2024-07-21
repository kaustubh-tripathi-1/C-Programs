#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j, k, rows, columns;

    printf("Enter how many rows you want to print -\n");
    scanf("%d", &rows);

    columns = (2*rows)-1;
    for( i=1 ; i<=rows ; i++ )
    {
        k=1;
        for( j=1 ; j<=columns ; j++)
        {
            if(j>=((rows+1)-i) && j<=((rows-1)+i) )
            {
                printf("%3d", k);

                if(j<rows)
                {
                    k++;
                }
                else
                {
                    k--;
                }
            }
            else
            {
                printf("   ");
            }


        }
        printf("\n");

    }

    getch();
    return 0;


}
