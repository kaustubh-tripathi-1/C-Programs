#include<stdio.h>
#include<conio.h>

int main()
{
    char str[30]={"My name is Kaustubh Tripathi"};
    int i, count=0;

    for ( i=0 ; str[i]!='\0'; i++ )
    {
        if (str[i]=='a')
            count++;
    }

    printf("The occurence of char a is - %d", count );
    getch();
    return 0;
}
