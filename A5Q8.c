#include <stdio.h>
#include <conio.h>

int main()
{
    char ch;
    printf("Enter a character: ");
    ch = getche();  // This will take the character and display it immediately
    printf("\nASCII code of '%c' is %d\n", ch, ch);
    getch();
    return 0;
}
