#include <stdio.h>
#include <conio.h>

//More Efficient than Prime(2).
int main()
{
    int i, n;

    printf("Enter a Number to check if its prime or not -\n");
    scanf("%d", &n);



    for( i=2 ; i<=n/2 ; i++)
    {
        if(n%i==0 && n!=2)
        {
            break;
        }
    }

    if(i==n/2+1)
        printf("%d is Prime.", n);
    else
        printf("%d is not Prime.", n);

    getch();
    return 0;


}
