#include <stdio.h>
#include <conio.h>

int main()
{
    int num1, num2, sum;
    printf("Enter two numbers: \n");
    scanf("%d %d", &num1, &num2);
    sum = num1 + num2;
    printf("Sum: %d\n", sum);
    getch();
    return 0;
}
