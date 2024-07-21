#include <stdio.h>
#include <conio.h>
#include <string.h>

void swapstring( char *, char * );
void swapstring( char *str1, char *str2 )
{
    char temp[100];
    strcpy(temp,str1); // Copy str1 to temp
    strcpy(str1,str2); // Copy str2 to str1
    strcpy(str2,temp); // Copy temp (original str1) to str2

}

int main ()
{
    char str1[100], str2[100];
    printf("Enter 1st String :\n");
    fgets(str1,sizeof(str1),stdin);
    printf("Enter 2nd String :\n");
    fgets(str2,sizeof(str2),stdin);

    // Remove newline characters from fgets input if present
    size_t len1=strlen(str1);
    if (len1>0 && str1[len1-1]=='\n')
    {
        str1[len1-1]='\0';
    }

    size_t len2=strlen(str2);
    if (len2>0 && str2[len2-1]=='\n')
    {
        str2[len2-1]='\0';
    }

    swapstring(str1, str2);
    printf("str1=%s, str2=%s", str1, str2);
    getch();
    return 0;

}
