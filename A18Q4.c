#include<stdio.h>
#include<conio.h>
#include<string.h>

int vowelcount(char *, int );
int vowelcount(char *p, int length )
{
    int count=0;
    printf("Here's the string size in vowelcount() - %d\n", length);
    for ( int i=0 ; i<length ; i++ )
    {
        if (*(p+i) == 'a' || *(p+i)=='e' || *(p+i) =='i' || *(p+i) =='o' || *(p+i) =='u' || *(p+i) == 'A' || *(p+i)=='E' || *(p+i) =='I' || *(p+i) =='O' || *(p+i) =='U')
            count++;
    }

    return count ;
}


int main()
{
    char str[100];
    int count;
    printf("Enter a String :\n");
    fgets(str,sizeof(str),stdin);
    size_t len=strlen(str);
    if (len>0 && str[len-1]=='\n')
    {
        str[len-1]='\0';
    }
    len = strlen(str);
    printf("Here's the string size in main() - %d\n", len);
    count = vowelcount(str, len);

    printf("The occurrence of vowels is - %d", count );
    getch();
    return 0;
}
