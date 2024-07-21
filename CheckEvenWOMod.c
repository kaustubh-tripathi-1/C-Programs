#include <stdio.h>
#include <conio.h>


int main()
{
    int n;
    printf("Enter a number to check for even odd:\n");
    scanf("%d", &n);

    if(n&1)
        printf("Number is Odd.");
    else
        printf("Number is Even.");
    getch();
    return 0;
    
}