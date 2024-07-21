#include <stdio.h>
#include <conio.h>


int main()
{
    int i, j, k=0, l, lines;
    printf("Enter number of line you want to print:\n");
    scanf("%d", &lines);
    l=(lines+1)/2;
    for(i=1 ; i<=lines ; i++)
    {
        if(lines%2==0)
        {
            if(i<=l)
            {
                k++;
            }
            if(i>l+1)
            {
                k--;
            }
            for(j=1 ; j<=lines ; j++)
            {
                            
                if(j>=l+1-k && j<=l-1+k)
                {              
                    printf("* ");
                }
                    
                else
                {
                    printf("  ");
                }
            }
        }
        else
        {
            i<=l?k++:k--;
            for(j=1 ; j<=lines ; j++)
            {
                            
                if(j>=l+1-k && j<=l-1+k)
                {              
                    printf("* ");
                }
                    
                else
                {
                    printf("  ");
                }
            }
        }
        printf("\n");
    }
    getch();
    return 0;

}