#include<stdio.h>
#include<conio.h>

int largestElement(int [], int );
void inputArray(int [], int );


int largestElement(int a[], int n)
{
    int lar;
   /*  if(n>=0)  My logic
    {
        
        lar=largestElement(a, n-1);
        if(lar<a[n])
            lar=a[n];
        
    } */

   if(n==0) //Good Logic too
        return a[0];

    else
    {
        lar = largestElement(a, n-1);
        return (lar>a[n])?lar:a[n];
    }
    
}

void inputArray(int a[], int n)
{
    if(n>=0)
    {
        inputArray(a, n-1);
        printf("Element %d -  ", n);
        scanf("%d", &a[n]);
    }
        
}


int main()
{
    int a[100], size, largest;
    printf("Input the number of elements to be stored in the array : ");
    scanf("%d", &size);
    printf("Input %d elements in the array : \n", size);
    inputArray(a, size-1);
    
    largest = largestElement(a, size-1);
    printf("Largest Array Element is %d. \n", largest);
    getch();
    return 0;    
}