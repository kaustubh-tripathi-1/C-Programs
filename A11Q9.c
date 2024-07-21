#include <stdio.h>
#include <conio.h>

int main()
{
    int x, y, lcm = 1;
    printf("Enter 2 numbers to find the LCM:\n");
    scanf("%d %d", &x, &y);

    if (x <= 0 || y <= 0)
        {
        printf("Please enter valid numbers greater than 0.\n");
        }
    else
        {
            int i = 2; // Start with the first prime number

            while (x != 1 || y != 1)
                {
                    if (x % i == 0 || y % i == 0)
                    {
                        if (x % i == 0)
                        {
                            x /= i;
                        }
                        if (y % i == 0)
                        {
                            y /= i;
                        }
                        lcm *= i;
                    }
                    else
                    {
                        i++; // Move to the next prime number
                    }
                }
        }

    printf("The LCM is %d\n", lcm);
    return 0;
}
