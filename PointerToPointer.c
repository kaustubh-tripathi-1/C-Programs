#include <stdio.h>

int main()
{
    int var = 10;       // Declare an integer variable
    int *ptr = &var;    // Declare a pointer to an integer, and store the address of var
    int **pptr = &ptr;  // Declare a pointer to a pointer, and store the address of ptr

    // Print the value of var using different methods
    printf("Value of var: %d\n", var);
    printf("Value of var using ptr: %d\n", *ptr);
    printf("Value of var using pptr: %d\n", **pptr);

    // Print the address of var
    printf("Address of var: %p\n", (void*)&var);
    printf("Address of var using ptr: %p\n", (void*)ptr);
    printf("Address of var using pptr: %p\n", (void*)*pptr);

    // Print the address of ptr
    printf("Address of ptr: %p\n", (void*)&ptr);
    printf("Address of ptr using pptr: %p\n", (void*)pptr);

    return 0;
}
