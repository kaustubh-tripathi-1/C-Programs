#include<stdio.h>
#include<conio.h>

void toBinary(unsigned int n);

void toBinary(unsigned int n)
{
    if( n>0 )
    {
        int remainder=n%2;
        toBinary(n/2);
        printf("%d", remainder);

    }
}


int main()
{
    unsigned int n;
    printf("Enter a number to convert it to binary -\n");
    scanf("%u", &n);

    printf("Binary of %d is -\n", n);
    if(n==0)
        printf("0");
    else
        toBinary(n);
    getch();
    return 0;

}
