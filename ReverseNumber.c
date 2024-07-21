#include<stdio.h>
#include<conio.h>


int reversenum(int num);

int reversenum(int num)
{
    int rev_num=0, remainder;
    while(num>0)
    {
        remainder=num%10;
        rev_num=rev_num*10+remainder;
        num/=10;
    }
    return rev_num;
}

int main()
{
    int num, rev_num;
    printf("Enter a number to reverse it -\n");
    scanf("%d", &num);

    rev_num=reversenum(num);

    printf("%d.", rev_num);
    getch();
    return 0;
}
