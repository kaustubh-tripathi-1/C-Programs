#include<stdio.h>
#include<conio.h>
int main()
{
    int x, y;
    printf("Enter the value of x & y:\n");
    scanf("%d %d", &x, &y);

    switch(x*y)
    {
    case 12:
        printf("%d", x+y);
        break;
    case 90:
        printf("Y\n");
        break;
    case 342:
        printf("Z\n");
        break;
    default:
        printf("Default\n");
    }
    getch();
}
