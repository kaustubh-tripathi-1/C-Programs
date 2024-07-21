#include <stdio.h>
#include <conio.h>

int countDigits(int );
int reverse_Number(int , int);

int countDigits(int num)
{
    int digits=0;
    while (num>0)
    {
        digits++;
        num/=10;
    }
    return digits;
}

int reverse_Number(int num, int digits)
{
    int rev_num=0, count, lock=1, remainder=0;
    for(int i=1 ; i<=digits ; i++)
    {
        remainder=num%10;
        rev_num = (rev_num*10) + remainder;
        num/=10;
    }
    return rev_num;
}

int main()
{
    int i,num, digits, rev_num;

    printf("ENter a number :\n");
    scanf("%d", &num);

    digits = countDigits(num);

    rev_num = reverse_Number(num, digits);

    printf("The reversed number is %d", rev_num);
    getch();
    return 0;


}
