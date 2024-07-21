#include<stdio.h>
#include<conio.h>


void inputArray(int ar[], int n)
{
    if(n>=0)
    {
        inputArray(ar, n-1);
        printf("Element %d -  ", n);
        scanf("%d", &ar[n]);
    }
        
}

void printArray( int ar[] ,int n)
{
    if(n>=0)
    {
        printArray(ar, n-1);
        printf("%d ", ar[n]);
    }
}

int main()
{
    int a[100], e, i;
    printf("Input the number of elements to be stored in the array : ");
    scanf("%d", &e);
    printf("Input %d elements in the array : \n", e);
    inputArray(a, e-1);
    printf("Array Elements are : \n");
    printArray(a, e-1);
    getch();
    return 0;    
}