#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int sumOfDigits(int num);

int sumOfDigits(int num)
{
    int sum=0;

    while(num>0)
    {
        sum+=num%10;
        num/=10;
    }
    return sum;
}

int main()
{
    int num;
    printf("Enter the number to know the sum of its digits :\n");
    scanf("%d", &num);

    printf("The sum of the digits in %d is %d.\n", num, sumOfDigits(num));

    system("pause");
    return 0;

}
