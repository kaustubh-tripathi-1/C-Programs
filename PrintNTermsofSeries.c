#include <stdio.h>
#include <conio.h>

int main()
{
    int n,i;

    printf("Enter the number of term up to which you want to print the series of Adding Odd Natural Numbers:\n");
    scanf("%d", &n);

     for(i=1 ; i<=n ; i++)
    {

        printf("%d ", i*i+1);
    }

    /*for(i=1 ; i<=2*n ; i+=2)
    {
        x=x+i;
        printf("%d ", x);
    }*/

    getch();
    return 0;

}
