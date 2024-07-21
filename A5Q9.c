#include <stdio.h>
#include <conio.h>

int main()
{
    float costPrice, sellingPrice, profit, profitPercentage;
    printf("Enter the cost price and selling price: ");
    scanf("%f %f", &costPrice, &sellingPrice);
    profit = sellingPrice - costPrice;
    profitPercentage = (profit / costPrice) * 100;
    printf("Profit Percentage: %.2f%%\n", profitPercentage);
    getch();
    return 0;
}
