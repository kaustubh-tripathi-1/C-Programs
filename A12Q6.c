#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j;
    char k;
    for(i=1;i<=4;i++)
    {
        k='A';
        for(j=1;j<=4;j++)
        {
            if (j<=5-i)
                printf("%c\t", k++);
            else
                printf(" ");
        }
        printf("\n");
    }
    getch();
}
