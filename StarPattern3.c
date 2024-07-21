#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j, rows, columns;
    char k;
    printf("Enter how many rows you want to print -\n");
    scanf("%d", &rows);

    columns = (2*rows)-1;
    for( i=1 ; i<=rows ; i++ )
    {
        k='A';
        for( j=1 ; j<=columns ; j++ )
        {
            if( j<=(rows+1)-i || j>=i+(rows-1) )
            {
                printf("%3c", k);
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
                if(j==rows)
                k--;
            }
        }
        printf("\n");
    }

    getch();
    return 0;


}
