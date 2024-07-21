#include<stdio.h>
#include<conio.h>
#include<string.h>

char* reverse( char [], size_t );
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

char* reverse( char s[], size_t len )
{
    int start=0, temp, end=len-1;
        while(start<end)
        {
            temp = s[start];
            s[start]=s[end];
            s[end]=temp;
            start++;
            end--;
        }
    return s;

}

int main ()
{
    char str[50];
    printf("Enter a string to reverse it -\n");
    fgets(str, sizeof(str), stdin);
    size_t len=strlen(str);

    printf("Length of string before removal of \\n - %zu\n", len);

    len = removeNewLine(str, len);


    printf("Length of string after removal of \\n - %zu\n", len);

    printf("Here's the string you entered - \n%s\n", str);

    reverse(str, len);

    printf("Here's the reversed string - \n%s\n", str);
    getch();
    return 0;
}
