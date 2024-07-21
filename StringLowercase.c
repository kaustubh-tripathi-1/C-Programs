#include<stdio.h>
#include<conio.h>
#include<string.h>

char* lowercase( char [], size_t );
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

char* lowercase( char s[], size_t len )
{
    for(int i=0 ; i<len ; i++)
    {
        if(s[i]>=65 && s[i]<=90)
        {
            s[i]+=32;
        }
    }
    return s;

}

int main ()
{
    char str[100];
    printf("Enter a string to reverse it -\n");
    fgets(str, sizeof(str), stdin);
    size_t len=strlen(str);

    len = removeNewLine(str, len);

    printf("Here's the string you entered - \n%s\n", str);

    lowercase(str, len);

    printf("Here's the converted string to Lowercase - \n%s\n", str);
    getch();
    return 0;
}
