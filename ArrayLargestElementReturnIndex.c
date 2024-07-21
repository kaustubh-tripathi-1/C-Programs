#include <stdio.h>
#include <conio.h>

// Function to find the largest element in an array
int largest_element(int *a, int size)
{
    int l = *a; // Initialize l to the first element
    int index = 0; // Initialize index to 0

    // Loop through the array starting from the second element
    for (int i = 1; i < size; i++)
    {
        // If current element is greater than l, update l and index
        if (*(a + i) > l)
        {
            l = *(a + i);
            index = i;
        }
    }

    // Print the largest element found
    printf("Largest element is %d\n", l);
    return index; // Return the index of the largest element
}

int main()
{
    int a[5], i, index;

    // Prompt user to enter elements for the array
    printf("Enter elements for array:\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }

    // Calculate the size of the array
    size_t size = sizeof(a) / sizeof(a[0]);

    // Print the size of the array
    printf("The size of array is %zu\n", size);

    // Print the array elements
    printf("The array elements:\n");
    for (i = 0; i < 5; i++)
    {
        printf("%d\t", a[i]);
    }
    printf("\n");

    // Find the index of the largest element in the array
    index = largest_element(a, size);

    // Print the index of the largest element
    printf("Index of Largest element is %d\n", index);

    getch(); // Wait for user input before closing
    return 0;
}
