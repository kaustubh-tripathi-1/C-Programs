#include<stdio.h>
#include<conio.h>


void elementFreq(int [], int);
void sort(int [], int);

void sort(int a[], int size)
{
    int temp, i, j;
    for( i=1 ; i<size ; i++)
    {
        temp = a[i];
        for(j=i-1 ; j>=0 && a[j]>temp ; j--)
        {
            a[j+1]=a[j];
        }
        a[j+1]=temp;
    }
}

void elementFreq(int a[], int size)
{
    int i=0, j, count=1;
    while(i<size)
    {
        count=1, j=i+1;
        while(j<size && a[j]==a[i])
        {
                count++;
                j++;
        }
        printf("\n%d - %d", a[i], count);
        i=j;
    }
}

int main()
{
    int arr[10], size, i;
    size=sizeof(arr)/sizeof(arr[0]);
    printf("Enter elements to count their frequency :\n");
    for( i=0 ; i<size ; i++)
        scanf("%d", &arr[i]);

    printf("\nHere's the array -\n");
    for(i=0 ; i<size ; i++)
        printf("%d\t", arr[i]);

    sort(arr, size);
    printf("\nHere's the sorted array -\n");
    for(i=0 ; i<size ; i++)
        printf("%d\t", arr[i]);

    printf("\n\nHere's the frequency of each element -\n");
    elementFreq(arr, size);


    getch();
    return 0;

}
