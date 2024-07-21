#include<stdio.h>
#include<conio.h>

void swap(int *, int *);

void swap(int *p, int *q)
{
    *p=*p+*q;
    *q=*p-*q;
    *p=*p-*q;
}

int main()
{
    int a, b;
    printf("Enter 2 numbers:\n");
    scanf("%d%d", &a, &b);

    printf("Value of a is %d\tValue of b is %d\n", a, b);

    swap(&a, &b);
    printf("\nValue of a is %d\tValue of b is %d\n", a, b);
    getch();
    return 0;
}
