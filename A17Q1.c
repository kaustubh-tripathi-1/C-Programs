#include<stdio.h>
#include<conio.h>

int main()
{
    char str[10]={'K', 'A', 'U', 'S', 'T', 'U', 'B', 'H'};
    int i;
    for( i=0 ; str[i] ; i++ );
    printf("Length of the String str is %d", i);
    getch();
    return 0;
}
