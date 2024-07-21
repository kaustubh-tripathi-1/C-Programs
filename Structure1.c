#include<stdio.h>
#include<conio.h>



typedef struct Time
{
    int hours,minutes,seconds;
}Time;



Time inputTime( )
{
    Time t;
    printf("Enter Time : \n");
    scanf("%d:%d:%d", &t.hours, &t.minutes, &t.seconds);

    return t;
}

/*void setTime( Time *t1)
{
    printf("Set your desired Time : \n");
    scanf("%d:%d:%d", &t1->hours, &t1->minutes, &t1->seconds);
}*/

Time setTime( int h, int m, int s)
{
    Time t1;
    t1.hours=h;
    t1.minutes=m;
    t1.seconds=s;
    return t1;
}

int main()
{
    //Time t;
    Time t={10, 45, 15};
    printf("Time is %d.%d.%d\n", t.hours, t.minutes, t.seconds);
    //t=inputTime();
    //setTime(&t);
    t=setTime(01, 18, 05);
    printf("Time after Setting Times is %d.%d.%d", t.hours, t.minutes, t.seconds);
    getch();
    return 0;
}
