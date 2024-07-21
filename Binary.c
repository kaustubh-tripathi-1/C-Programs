#include <stdio.h>
#include <conio.h>

int toBinary(int );

int toBinary(int num)
{
    int binary[32];
    int i=0;
    while(num>0)
    {
        binary[i] = num % 2;
        num/=2;
        i++;
    }


    for (int j=i-1 ; j>=0 ; j--)
    {
        printf("%d", binary[j]);

    }

    if (num=0)
        printf("0");

}

int main()
{
    int num;
    printf("Enter a number to convert it to binary :\n");
    scanf("%d", &num);


    printf("Binary of %d is - ", num);
    toBinary(num);
    getch();
    return 0;


}
