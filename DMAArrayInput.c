#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    int *ptr = (int *) malloc(6*sizeof(int));

    if ( ptr == NULL)
    {
        printf("Memory not allocated\n");
        return -1;
    }

    for(int i=0 ; i<6 ; i++ )
    {
        ptr[i] = i*3;

    }

    for(int i=0 ; i<6 ; i++ )
    {
        printf("%d Value of Array using DMA is %d\n", i+1, ptr[i]);

    }

    free(ptr);
    ptr = NULL;

    return 0;
}
