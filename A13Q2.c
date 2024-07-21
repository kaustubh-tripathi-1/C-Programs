#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int add(int *a, int *b);
int subtract(int *a, int *b);
int multiply(int *a, int *b);
int divide(int *a, int *b);


int add(int *a, int *b)
{
    return *a+*b;
}

int subtract(int *a, int *b)
{
    return *a-*b;
}

int multiply(int *a, int *b)
{
    return (*a)*(*b);
}

int divide(int *a, int *b)
{
   
    return (*a)/(*b);
}

int main()
{
    int a,b, result, choice;

    while(1)
    {
        
        printf("Enter the option/number of operation that you want to perform between 2 numbers:\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.Exit the Program\n");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1: //Addition
                printf("Enter 2 numbers:\n");
                scanf("%d%d", &a, &b);
                result = add(&a, &b);
                printf("Result of the operation is - %d\n", result);
                break;

            case 2: //Subtraction
                printf("Enter 2 numbers:\n");
                scanf("%d%d", &a, &b);
                result = subtract(&a, &b);
                printf("Result of the operation is - %d\n", result);
                break;

            case 3: //Multiplication
                printf("Enter 2 numbers:\n");
                scanf("%d%d", &a, &b);
                result = multiply(&a, &b);
                printf("Result of the operation is - %d\n", result);
                break;

            case 4: //Division
                printf("Enter 2 numbers:\n");
                scanf("%d%d", &a, &b);
                 if (b == 0)
                {
                    printf("Error: Division by zero is not allowed.\n");
                    break;
                }
                if(b!=0)
                {
                    result = divide(&a, &b);
                    printf("Result of the operation is - %d\n", result);
                }
                break;

            case 5: //Exit
                printf("You want to exit the program. Well, here you Go.....");
                return -1;
                break;

            default:
                printf("You entered the wrong choice.\n");
                break;
        }
    }

    getch();
    return 0;
}
