#include <stdio.h>
#include <conio.h>

int main()
{
    int num, square;
    printf("Enter a number: \n");
    scanf("%d", &num);
    square = num * num;
    printf("Square: %d\n", square);
    getch();
    return 0;
}
