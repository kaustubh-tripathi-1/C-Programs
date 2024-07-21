#include <stdio.h>
#include <conio.h>
int main()
{
    int decimal, binary = 0, base = 1;

    printf("Enter a decimal number: \n");
    scanf("%d", &decimal);

    while (decimal > 0)
    {
        int remainder = decimal % 2;
        binary = binary + remainder * base;
        decimal = decimal / 2;
        base = base * 10;
    }

    printf("Binary: %d\n", binary);
}
