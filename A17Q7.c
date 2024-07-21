#include<stdio.h>
#include<conio.h>
#include<string.h>

int len(char str[]);

int len(char str[])
{
    int i;
    for(i=0 ; str[i] ; i++ );
    return i;
}

int main()
{
    char str[100];
    printf("Enter a string :\n");
    fgets(str, sizeof(str), stdin);
    int l = len(str);
    printf("Length of the String str is %d", l-1);
    getch();
    return 0;
}
