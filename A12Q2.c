#include <stdio.h>
#include <conio.h>

int main()
{
    int x, y, hcf;
    printf("Enter 2 numbers to find the HCF:\n");
    scanf("%d %d", &x, &y);

    if (x <= 0 || y <= 0)
        {
        printf("Please enter valid numbers greater than 0.\n");
        }
     else
        {
            for( int i=1 ; i<=x/2 && i<=y/2 ; i++)
            {
                if( x%i==0 && y%i==0 )
                {
                    hcf=i;
                }
            }
            printf("The HCF of %d & %d is %d.\n", x, y, hcf);
        }
        getch();
}
