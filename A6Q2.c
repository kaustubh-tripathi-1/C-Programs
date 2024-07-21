#include <stdio.h>
#include <conio.h>

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Last digit: %d\n", num % 10);

    getch();
    return 0;
}
