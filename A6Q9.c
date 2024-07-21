#include<stdio.h>
#include<conio.h>
int main()
{
    float inr, usd=82.75, rusd;
    long int z;
    printf("Enter the amount in INR :");
    scanf("%f", &inr);

    rusd = inr/usd;
    printf("The resulted usd is %f", rusd);
}
