#include<stdio.h>
#include<conio.h>
int main()
{
    int i=1;
    //While
    while(i<=10)
    {
        printf("%d\n", i);
        i++;
    }
    getch();

    //do-while

    i=1;
    do
    {
        printf("%d\n", i);
        i++;
    }   while (i<=10);
    getch();



    for(i=1;i<=10;i++)
    {
        printf("%d\n", i);

    }
    getch();
}
