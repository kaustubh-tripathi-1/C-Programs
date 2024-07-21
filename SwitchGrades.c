#include<stdio.h>
#include<conio.h>

int main ()
{
    int marks;

    printf("Enter the Marks to know the Grade : \n");
    scanf("%d", &marks);

  if(marks<0 || marks>100)
    {
        printf("\nMarks are in the range of 0 to 100.\n");
        return 1;
    }

    switch(marks)
    {
    case 91 ... 100:
        printf("Grade A.");
        break;
    case 81 ... 90:
        printf("Grade B.");
        break;
    case 71 ... 80:
        printf("Grade C.");
        break;
    case 61 ... 70:
        printf("Grade D.");
        break;
    case 51 ... 60:
        printf("Grade E.");
        break;
    case 0 ... 50:
        printf("Grade F.");
        break;
    }

    getch();
    return 0;
}
