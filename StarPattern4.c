#include <stdio.h>
#include <conio.h>

int main()
{
    int i, j, k, r, rows, columns, n;

    scanf("%d", &n);
    rows = 2*n-1;
    columns = 2*n-1;

    for( i=1, r=0; i<=rows ; i++)
    {
        i<=n?r++:r--;
        k=n;
        for( j=1 ; j<=columns ; j++)
        {
                if(j>=r && j<=2*n-r)
                {
                    printf("%d ", k);

                }
                else
                {
                    if(j<=n)
                    {
                        printf("%d ", k);
                        k--;
                    }
                    else
                    {
                        k++;
                        printf("%d ", k);
                    }

                }
        }
        printf("\n");
    }
    getch();
    return 0;
}
