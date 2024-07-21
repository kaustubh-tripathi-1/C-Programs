#include <stdio.h>
#include <conio.h>


int main()
{
    int i, j, lines, rows, columns, k=0, p;
    printf("Enter number of lines you want to print:\n");
    scanf("%d", &lines);
    printf("\n");
    rows = lines;
    columns = 2*lines-1;
    for(i=1 ; i<=rows ; i++)
    {
        if(i%2==0)
        {
            k--;
            k+=i;

        }
        else
            k+=1;
        p=k;
        for(j=1 ; j<=columns ; j++)
        {
            if(j<=(i*2)-1)
            {
                if(j%2==0)
                {
                    printf("   *");
                }    
                else
                {
                    printf(" %3d", p);
                    if(i%2)
                    {
                        p++;k++; 
                    }
                    else
                        p--;
                }
                
            }
            else
            {
                printf("    ");
            }
        }
        printf("\n");
    }
    getch();
    return 0;
}