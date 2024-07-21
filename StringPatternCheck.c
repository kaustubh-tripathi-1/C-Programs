#include<stdio.h>
#include<conio.h>
#include<string.h>

int checkPattern( char [] , int , char [], int);

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


int checkPattern( char s[], int l1, char p[], int l2 )
{
    int i, j, k;
    for( i=0 ; i<=l1-l2 ; i++)
    {
        for( j=i, k=0 ; p[k] ; j++, k++)
        {
            if(p[k]!=s[j])
                break;
        }
        if(k==3)
        {
            printf("%d", i);
            return i;

        }

    }
    return -1;

}

int main ()
{
    char str[100], pat[30];
    int c;
    printf("Enter a string to check pattern -\n");
    fgets(str, sizeof(str), stdin);
    printf("Enter a pattern -\n");
    fgets(pat, sizeof(pat), stdin);
    size_t len1=strlen(str);
    size_t len2=strlen(pat);
    len1=removeNewLine(str, len1);
    len2=removeNewLine(pat, len2);
    printf("Here's the string you entered - \n%s\n & String length is %zu\n", str, len1);
    printf("Here's the pattern you entered - \n%s\n & String length is %zu\n", pat, len2);

    c=checkPattern(str, len1, pat, len2);
    if(c!=-1)
        printf("String contains the given pattern & first index when pattern matched is %d.\n", c);

    else
        printf("String doesn't contain the given pattern.\n");
    getch();
    return 0;
}
