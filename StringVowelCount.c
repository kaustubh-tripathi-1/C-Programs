#include<stdio.h>
#include<conio.h>
#include<string.h>

int vowelCount( char [], size_t );
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

int vowelCount( char s[], size_t len )
{
    int c=0;
    char vowel[]="aeiouAEIOU";
    for(int i=0 ; i<len ; i++)
    {
        for(int j=0 ; vowel[j] ; j++)
        {
            if(s[i]==vowel[j])
            {
                c++;
                break;
            }
        }
    }
    return c;

}

int main ()
{
    char str[100];
    int count;
    printf("Enter a string to reverse it -\n");
    fgets(str, sizeof(str), stdin);
    size_t len=strlen(str);

    len = removeNewLine(str, len);

    printf("Here's the string you entered - \n%s\n", str);

    count = vowelCount(str, len);

    printf("Count of Vowel in the input string is %d.\n", count);
    getch();
    return 0;
}
