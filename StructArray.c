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
    printf("Enter DOB :\n");
    scanf("%d.%d.%d", &sdate.d, &sdate.m, &sdate.y);
    return sdate;

}

void printdate( struct date sdate)
{
    printf("%d.%d.%d\n", sdate.d, sdate.m, sdate.y);
}
int main()
{
    struct date dob[4];
    printf("Enter DOB of 4 Students :\n");
    for( int i=0 ; i<4 ; i++ )
    {
        dob[i]=inputdate();
    }

    printf(" The DOBs are - \n");
    for( int i=0 ; i<4 ; i++ )
    {
        printdate(dob[i]);
    }
    return 0;
}
