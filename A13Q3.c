#include <stdio.h>
#include <conio.h>


int main()
{
    int day;

    // Prompt the user to enter the day number
    printf("Enter the day number of the week (1-7): ");
    scanf("%d", &day);

    // Display a unique greeting message for each day
    switch (day)
    {
        case 1:
        {
            printf("Happy Monday! Start your week with a smile.\n");
            break;
        }
        case 2:
        {
            printf("Terrific Tuesday! Keep the momentum going.\n");
            break;
        }
        case 3:
        {
            printf("Wonderful Wednesday! You're halfway through the week.\n");
            break;
        }
        case 4:
        {
            printf("Thrilling Thursday! The weekend is almost here.\n");
            break;
        }
        case 5:
        {
            printf("Fantastic Friday! Enjoy the end of the work week.\n");
            break;
        }
        case 6:
        {
            printf("Super Saturday! Have a great weekend.\n");
            break;
        }
        case 7:
        {
            printf("Sunny Sunday! Relax and recharge for the week ahead.\n");
            break;
        }
        default:
        {
            printf("Invalid day number! Please enter a number between 1 and 7.\n");
        }
    }
    getch();
    return 0;
}
