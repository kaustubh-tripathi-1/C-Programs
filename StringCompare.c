#include<stdio.h>
#include<conio.h>
#include<string.h>

int compare( char [] , int , char [], int);

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


int compare( char s1[], int l1, char s2[], int l2 )
{
    int i=0;
    while(i<l1 && i<l2)
    {
        if(s1[i]==s2[i])
            i++;
        else if(s1[i]>s2[i])
            return 1;
        else if(s1[i]<s2[i])
            return -1;
    }
    if(s1[i]==0 && s2[i]==0)
        return 0;
    if(s1[i]==0)
        return -1;
    if(s2[i]==0)
        return 1;



}

int main ()
{
    char str1[100], str2[30];
    int c;
    printf("Enter 1st string to compare -\n");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter 2nd string to compare -\n");
    fgets(str2, sizeof(str2), stdin);
    size_t len1=strlen(str1);
    size_t len2=strlen(str2);
    len1=removeNewLine(str1, len1);
    len2=removeNewLine(str2, len2);
    printf("Here's the 1st string you entered - \n%s\nString length is %zu\n", str1, len1);
    printf("Here's the 2nd string you entered - \n%s\nString length is %zu\n", str2, len2);

    c=compare(str1, len1, str2, len2);
    if(c==-1)
        printf("Strings are in dictionary order.\n");
    else if (c==1)
        printf("Strings are not in dictionary order.\n");
    else
        printf("Strings are same.\n");

    getch();
    return 0;
}
