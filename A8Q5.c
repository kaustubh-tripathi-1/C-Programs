#include<stdio.h>
#include<conio.h>
int main()
{
    int x, y, z;
    printf("Enter 3 numbers :\n");
    scanf(" %d %d %d", &x, &y, &z);

    if ( x > y && x > z )
        {
            printf("%d is Greatest Number\n", x);
        }
    else
        {
            if ( y > x && y > z )
            {
                printf("%d is Greatest Number\n", y);
            }
            else
            {
                if ( z > x && z > y )
                {
                    printf("%d is Greatest Number\n", z);
                }
                else
                {
                    if ( x==y || y==z )
                        printf("Numbers are same\n");

                    if ( x==z || x==y==z )
                        printf("Numbers are same\n");
                }

            }

        }
    getch();
}
