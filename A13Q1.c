#include<stdio.h>
#include<conio.h>

int main ()
{
    int month;

    printf("Enter the Month Number : \n");
    scanf("%d", &month);

  if(month<1 || month>13)
    {
        printf("\nYou didn't enter the Correct Month Number.\n");
        return -1;
    }



    switch(month)
    {
    case 1:
        printf("The Number of Days in January are 31.", month);
        break;
    case 2:
        printf("The Number of Days in Febraury are 28.");
        break;
    case 3:
        printf("The Number of Days in March are 31.");
        break;
    case 4:
        printf("The Number of Days in April are 30.");
        break;
    case 5:
        printf("The Number of Days in May are 31.");
        break;
    case 6:
        printf("The Number of Days in June are 30.");
        break;
    case 7:
        printf("The Number of Days in July are 31");
        break;
    case 8:
        printf("The Number of Days in August are 31.");
        break;
    case 9:
        printf("The Number of Days in September are 30.");
        break;
    case 10:
        printf("The Number of Days in October are 31.");
        break;
    case 11:
        printf("The Number of Days in November are 30.");
        break;
    case 12:
        printf("The Number of Days in December are 31.");
        break;
    }

    getch();
    return 0;
}
