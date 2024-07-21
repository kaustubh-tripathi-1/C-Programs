#include <stdio.h>
#include <conio.h>
int main()
{
    int x,y,z;

    printf("Enter 3 numbers:\n");
    scanf("%d%d%d", &x, &y, &z);

    /*if(x>=y && x>=z)            //Normal program with Extra operations
    {
        printf("\nThe Greater Number is %d.", x);
    }
    else if(y>=x && y>=z)
    {
        printf("\nThe Greater Number is %d.", y);
    }
    else if(z>=x && z>=y)
    {
        printf("\nThe Greater Number is %d.", z);
    }*/

    /*More Efficient program without unnecessary checking
    if(x>y)
    {
        if(a>c)
            printf("\nThe Greater Number is %d.", x);
        else
            printf("\nThe Greater Number is %d.", c);
    }
    else if(y>z)
    {
        printf("\nThe Greater Number is %d.", y);
    }
    else
    {
        printf("\nThe Greater Number is %d.", z);
    }
    */

    //More Efficient program without unnecessary checking & Conditional Operator
    printf("The Greater Number is %d.", (x>y)?((x>z)?x:z):((y>z)?y:z));


    getch();
    return 0;
}
