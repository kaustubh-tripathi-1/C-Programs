#include <stdio.h>
#include <conio.h>


int main()
{

    int n, i;
    printf("Enter the number of the first Odd Natural numbers to print:\n");
    scanf("%d", &n);

    for( i=1 ; i<=n ; i++)
    {
        printf("%d\t", (2*i)-1);

    }

    /*i=1;
    while(i<=2*n)
    {
        printf("%d\t", i);
        i+=2;
    }*/

    getch();
    return 0;
}
