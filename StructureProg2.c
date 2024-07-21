#include<stdio.h>
#include<conio.h>

struct date
{
    int d, m, y;
};

struct date inputdate();
void printdate( struct date);

struct date inputdate()
{
    struct date sdate;
    printf("Enter today's date :\n");
    scanf("%d.%d.%d", &sdate.d, &sdate.m, &sdate.y);
    return sdate;

}

void printdate( struct date sdate)
{
    printf("%d.%d.%d", sdate.d, sdate.m, sdate.y);
}
int main()
{
    struct date d1;
    d1=inputdate();

    printdate(d1);
    return 0;
}
