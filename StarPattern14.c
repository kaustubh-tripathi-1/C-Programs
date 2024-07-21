#include <stdio.h>
#include <conio.h>


int main()
{
    int i, j, lines;
    char k='A';
    printf("Enter number of line you want to print:\n");
    scanf("%d", &lines);
    for(i=1 ; i<=lines ; i++)
    {
        k='A';
        for(j=1 ; j<=(2*lines-1) ; j++)
        {
            if(j<=(lines+1)-i || j>=i+(lines-1))
            {              
                printf("%c ", k);
                j<lines?k++:k--;
            }
                
            else
            {
                printf("  ");
                if(j==lines)
                    k--;
            }
        }
        printf("\n");
    }
    getch();
    return 0;

}