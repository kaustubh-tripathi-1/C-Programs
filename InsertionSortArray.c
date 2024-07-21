#include<stdio.h>
#include<conio.h>

void sort(int [], int);

void sort(int sa[], int size)
{
    int temp, i, j;
    for(i=1 ; i<size ; i++)  // Start from 1 because the first element is trivially sorted
    {
        temp = sa[i];  // Store the value to be positioned

        // Shift elements of the sorted segment forward if they are larger than temp
        for(j=i-1 ; j>=0 && sa[j]>temp ; j--)
        {
            sa[j+1] = sa[j];
        }
        sa[j + 1] = temp;  // Insert the value at the correct position
    }
}

int main()
{
    int a[5], i, size;
    size = sizeof(a)/sizeof(a[0]);
    printf("Enter elements for an array -\n");
    for(i=0 ; i<size ; i++)
        scanf("%d", &a[i]);

    printf("\nHere's the array -\n");
    for(i=0 ; i<size ; i++)
        printf("%d\t", a[i]);

    sort(a, size);
    printf("\nHere's the sorted array -\n");
    for(i=0 ; i<size ; i++)
        printf("%d\t", a[i]);

    getch();
    return 0;
}
