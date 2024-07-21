#include<stdio.h>
#include<conio.h>
int main()
{
    int a=(1,2,3); //3 will be assigned using Comma Operator
    printf("%d\n", a);
    a=1, 2, 3;     // 1 will be assigned, here 1st is assigned, rest is non-significant
    printf("%d", a);

    // int x=1,2,3; Here it will be an error as no brackets are used and 2 & 3 are not variables in a declaration statement

    getch();
    return 0;
}
