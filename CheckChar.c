#include<stdio.h>
#include<conio.h>
int main()
{
    char c;
    printf("Enter a character:\n");
    scanf("%c", &c);

    if (c>='A' && c<='Z')
        printf("Character is Uppercase Alphabet");
    else if (c>='a' && c<='z')
        printf("Character is Lowercase Alphabet");
    else if (c>='0' && c<='9')
        printf("Character is a Digit");
    else
        printf("Character is a Special Character");
    getch();
}
