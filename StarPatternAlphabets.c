#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j, lines;
    char k;
    printf("Enter how many lines you want to print:\n");
    scanf("%d", &lines);
    for(i=1;i<=lines;i++)
    {
        k='A';
        for(j=1;j<=lines;j++)
        {
            if (j<=(lines+1)-i)
                printf("%c\t", k++);
            else
                printf(" ");
        }
        printf("\n");
    }
    getch();
}
