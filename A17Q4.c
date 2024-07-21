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
        str[len-1]=='\0';
    }


    i=0;
    while (str[i]!='\0') // Conversion of lower to uppercase
    {
        if ( str[i]>= 'a' && str[i]<= 'z' )
        {
            str[i] = str[i] - ('a' - 'A');
        }
        i++;
    }

    printf("Uppercase string is %s", str ); // Print string
    getch();
    return 0;
}
