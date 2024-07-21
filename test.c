#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
    int rows = 5;
    int cols = 5;
    int num = 1;
    char x;

    char str[]="Helloo\0\0";
    printf("%d\n",strlen(str));

    // Outer loop for rows
    for (int i = 0; i < rows; i++)
    {
        // Inner loop for columns
        for (int j = 0; j < cols; j++)
        {
            printf("%d ", num++);
        }
        printf("\n");  // Move to the next line after each row
    }

    printf("\"MySirG\"\n");

    printf("Enter a Char :\n");
    x=getch();
    printf("%d", x);

    return 0;
}
