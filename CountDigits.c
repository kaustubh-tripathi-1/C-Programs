#include<stdio.h>
#include<conio.h>

int countdigits(int num)
{
    int count=0;
    while(num>0)
    {
        count++;
        num/=10;
    }

    return count;
}


int main()
{
    int num, count;
    printf("Enter a number to count the number of digits -\n");
    scanf("%d", &num);

    printf("There are %d digits in the number.", countdigits(num));
    getch();
    return 0;

}
