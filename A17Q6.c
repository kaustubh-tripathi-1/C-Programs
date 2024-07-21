#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    char str[100];
    int i;

    printf("Enter a string : \n");
    fgets(str, sizeof(str), stdin); // Input String using fgets

    size_t len=strlen(str);  // Remove the newline character if present
    if (len > 0 && str[len-1]== '\n')
    {
        str[len-1]='\0';
        len--;
    }

    if (len>0)
    {
        int start = 0;
        int end = len-1;

        while ( start < end )
        {
            char temp = str[start];
            str[start] = str[end];
            str[end]=temp;
            start++;
            end--;
        }
    }

    printf("Reverse string is :\n%s", str);
    getch();
    return 0;
}
