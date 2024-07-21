#include<stdio.h>
#include<conio.h>

int main()
{
    char c;

    printf("Enter a char, digit or a special character :\n");
    scanf("%c", &c);
    if ( (c >='A' && c<='Z') )
        printf("The char you entered is an uppercase alphabet.\n");
    else if (c >='a' && c<='a')
        printf("The char you entered is an lowercase alphabet.\n");
    else if (c >='0' && c<='9')
         printf("The char you entered is a digit.\n");
    else
        printf("The char you entered is a special char.\n");
    getch();
    return 0;
}
