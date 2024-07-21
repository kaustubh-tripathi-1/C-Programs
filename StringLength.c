#include<stdio.h>
#include<conio.h>
#include<string.h>

int len(char []);

int len(char s[])
{
    int l=0,i=0;
    while(s[i]!='\0')
    {
        l++;
        i++;
    }
    return l;
}

int main()
{
    char str[30];
    int l;
    printf("Enter a string - \n");

    fgets(str, sizeof(str), stdin);
    size_t leng=strlen(str);
    if(leng>0 && str[leng-1]=='\n')
        str[leng-1]='\0';

    printf("Here's the string you entered - \n%s\n", str);
    l=len(str);
    printf("Length of string is - %d\n", l);
    getch();
    return 0;
}
