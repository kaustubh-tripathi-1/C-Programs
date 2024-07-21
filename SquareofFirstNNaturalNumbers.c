#include <stdio.h>
#include <conio.h>

int main()
{
    int n,i;

    printf("Enter the number of first Even Natural numbers you want to print :\n");
    scanf("%d", &n);

    for(i=1 ; i<=n ; i++)
    {
        printf("%d\t", i*i);
    }

    getch();
    return 0;

}
