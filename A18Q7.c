#include<stdio.h>
#include<conio.h>
#include<string.h>

void sreverse(char *, size_t  );
void sreverse(char *n, size_t len)
{
    if(len>0)
    {
        int start = 0;
        int end = len-1;
        while ( start < end )
        {
            char temp = n[start];
            n[start] = n[end];
            n[end] = temp;
            start++;
            end--;
        }
    }
    printf("String entered by you in Reverse order : \n");
    printf("%s", n);
}

int main ()
{
    char name[100], i;
    printf("Enter a String : \n");
    fgets(name, sizeof(name), stdin );

    size_t len = strlen(name);
    if ( len>0 && name[len-1]=='\n')
    {
        name[len-1]='\0';
        len--;
    }


    printf("String entered by you :\n%s", name);
    printf("\n\n");
    sreverse(name, len);
    getch();
    return 0;
}
