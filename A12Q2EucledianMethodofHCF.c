#include <stdio.h>
#include <conio.h>

int main()
{
    int x, y, a, b, hcf;
    printf("Enter 2 numbers to find the HCF:\n");
    scanf("%d %d", &x, &y);

    if (x <= 0 || y <= 0)
        {
        printf("Please enter valid numbers greater than 0.\n");
        }
     else
        {
            a = x, b = y;

            while (b != 0)
            {
                int remainder = a % b;
                a = b;
                b = remainder;
            }

            int hcf = a;

            printf("The HCF of %d & %d is %d.\n", x, y, hcf);
        }
        getch();
        return 0;
}
