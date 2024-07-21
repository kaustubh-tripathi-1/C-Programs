#include <stdio.h>
#include <conio.h>

void swap( int *, int * );
void swap( int *p, int *q )
{
    int temp;
    temp=*p;
    *p=*q;
    *q=temp;

}

int main ()
{
    int a, b;
    printf("Enter 2 numbers :\n");
    scanf("%d%d", &a, &b );
    swap(&a, &b);
    printf("a=%d, b=%d", a, b);
    getch();
}
