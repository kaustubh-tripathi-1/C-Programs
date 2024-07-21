#include <stdio.h>
#include <conio.h>

void isIsoscelesTriangle(int a, int b, int c);
void isRightAngledTriangle(int a, int b, int c);
void isEquilateralTriangle(int a, int b, int c);

int main()
{
    int choice;
    int a, b, c;

    while (1)
    {
        printf("Menu:\n");
        printf("a. Check if three numbers form an isosceles triangle\n");
        printf("b. Check if three numbers form a right-angled triangle\n");
        printf("c. Check if three numbers form an equilateral triangle\n");
        printf("d. Exit\n");
        printf("Enter your choice (a/b/c/d): ");
        scanf(" %c", &choice);

        if (choice == 'd')
        {
            printf("Exiting the program.\n");
            break;
        }

        if (choice != 'a' && choice != 'b' && choice != 'c')
        {
            printf("Invalid choice. Please try again.\n");
            continue;
        }

        printf("Enter three sides of the triangle: ");
        scanf("%d %d %d", &a, &b, &c);

        switch (choice)
        {
            case 'a':
                isIsoscelesTriangle(a, b, c);
                break;
            case 'b':
                isRightAngledTriangle(a, b, c);
                break;
            case 'c':
                isEquilateralTriangle(a, b, c);
                break;
        }
    }
    getch();
    return 0;
}

void isIsoscelesTriangle(int a, int b, int c)
{
    if ((a == b && a != c) || (a == c && a != b) || (b == c && b != a))
    {
        printf("The numbers %d, %d, and %d form an isosceles triangle.\n", a, b, c);
    }
    else
    {
        printf("The numbers %d, %d, and %d do not form an isosceles triangle.\n", a, b, c);
    }
}

void isRightAngledTriangle(int a, int b, int c)
{
    if ((a * a + b * b == c * c) || (a * a + c * c == b * b) || (b * b + c * c == a * a))
    {
        printf("The numbers %d, %d, and %d form a right-angled triangle.\n", a, b, c);
    }
    else
    {
        printf("The numbers %d, %d, and %d do not form a right-angled triangle.\n", a, b, c);
    }
}

void isEquilateralTriangle(int a, int b, int c)
{
    if (a == b && b == c)
    {
        printf("The numbers %d, %d, and %d form an equilateral triangle.\n", a, b, c);
    }
    else
    {
        printf("The numbers %d, %d, and %d do not form an equilateral triangle.\n", a, b, c);
    }
}
