#include <stdio.h>
#include <conio.h>


int main()
{
    int i, j, k=1, lines;
    printf("Enter number of line you want to print:\n");
    scanf("%d", &lines);
    printf("\n");
    for(i=1 ; i<=lines ; i++)
    {
        k=1;
        for(j=1 ; j<=(2*lines-1) ; j++)
        {
            if(j>=(lines+1)-i && j<=i+(lines-1))
            {        
                    
                printf("%d ", k);
                j<lines?k++:k--;   
               
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