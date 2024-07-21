#include <stdio.h>
#include <conio.h>

int main()
{
    int n,i;

    printf("Enter the number of first Even Natural numbers you want to print :\n");
    scanf("%d", &n);

    for(i=n ; i>=1 ; i--)
    {
        printf("%d\t", 2*i);
    }

    getch();
    return 0;

}
