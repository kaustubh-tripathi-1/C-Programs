#include <stdio.h>
#include <conio.h>
int main()
{
    int n,i, sum=0;

    printf("Enter the number of Odd Natural Number of which you want to print the sum:\n");
    scanf("%d", &n);

    for(i=1 ; i<=n ; i++)
    {
        sum+=(2*i)-1;
    }
    printf("The sum of  First %d Odd Natural numbers is %d", n, sum);
    getch();
    return 0;
}
