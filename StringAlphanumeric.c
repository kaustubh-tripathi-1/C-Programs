#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdbool.h>

/*int checkAlpha( char [], size_t );*/
bool checkAlpha( char [], size_t );
size_t removeNewLine(char [], size_t);

size_t removeNewLine(char s[], size_t l)
{
    l=strlen(s);
    if(l>0 && s[l-1]=='\n')
    {
        s[l-1]='\0';
        l--;
    }
    return l;
}

/*int checkAlpha( char s[], size_t len )
{
    int a=0, d=0;
    for(int i=0 ; i<len ; i++)
    {
            if(s[i]>=48 && s[i]<=57)
            {
                d=1;
            }

            if((s[i]>=65 && s[i]<=90) || (s[i]>=97 && s[i]<=122))
            {
                a=1;
            }
    }
    return a&&d;

}*/

//Using Bool data type

bool checkAlpha( char s[], size_t len )
{
    int a=false, d=false;
    for(int i=0 ; i<len ; i++)
    {
            if(s[i]>=48 && s[i]<=57)
            {
                d=true;
            }

            if((s[i]>=65 && s[i]<=90) || (s[i]>=97 && s[i]<=122))
            {
                a=true;
            }
    }
    if(a&&d)
        return true;
    return false;

}

int main ()
{
    char str[100];
    printf("Enter a string to reverse it -\n");
    fgets(str, sizeof(str), stdin);
    size_t len=strlen(str);

    len = removeNewLine(str, len);

    printf("Here's the string you entered - \n%s\n", str);

    if(checkAlpha(str, len))
        printf("String is Alphanumeric.\n");
    else
        printf("String is not Alphanumeric.\n");

    getch();
    return 0;
}
