#include<stdio.h>
#include<conio.h>


int reversenum(int num);

int reversenum(int num)
{
    int rev_num=0;
    while(num>0)
    {
        rev_num=rev_num*10+num%10;
        num/=10;
    }

    return rev_num;
}

int main()
{
    int num, rev_num;
    printf("Enter a number to check if its Palindrome or not -\n");
    scanf("%d", &num);

    while(num<0)
    {
        printf("Please enter a Non-negative Number\n");
        scanf("%d", &num);
    }

    rev_num=reversenum(num);

    if (num==rev_num)
    {
        printf("The number is palindrome.");
    }
    else
    {
        printf("The number is not palindrome.");
    }

    getch();
    return 0;

}
