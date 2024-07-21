#include <stdio.h>
#include <conio.h>

int main()
{
    int n,i, sum=0;

    printf("Enter the number of Natural Number up to which you want to print the sum:\n");
    scanf("%d", &n);

    for(i=1 ; i<=n ; i++)
    {
        sum+=i;
    }

    /*
    for(i=1, s=0 ; i<=n ; sum+=i, i++); // For Single line statement
    */

    printf("The sum of  First %d Natural numbers is %d", n, sum);

    getch();
    return 0;

}
