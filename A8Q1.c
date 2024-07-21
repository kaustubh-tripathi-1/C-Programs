#include <stdio.h>
#include <conio.h>

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 3 == 0 && num % 2 == 0)
    {
        printf("%d is divisible by both 3 and 2.\n", num);
    }
    else
    {
        printf("%d is not divisible by both 3 and 2.\n", num);
    }

    getch();
    return 0;
}
