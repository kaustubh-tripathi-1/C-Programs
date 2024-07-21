#include <stdio.h>
#include <conio.h>

int LCM ( int, int );
int main()
{
    int x, y, lcm;
    printf("Enter 2 numbers to find the LCM:\n");
    scanf("%d %d", &x, &y);
    lcm = LCM ( x, y);
    printf("The LCM is %d\n", lcm);
}


int LCM ( int x, int y )
{
    int lcm = 1, i;
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


    return lcm;
}
