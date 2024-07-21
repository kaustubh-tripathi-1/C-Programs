#include<stdio.h>
#include<conio.h>

void inputMatrix(int (*)[3]);
void displayMatrix(int (*)[3]);
void matrixmultiply(int (*)[3], int (*)[3], int (*)[3]);

void inputMatrix(int (*a)[3])
{
    for( int i=0 ; i<3 ; i++)
    {
        for(int  j=0 ; j<3 ; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("\n");
}




void displayMatrix(int (*a)[3])
{
    for(int  i=0 ; i<3 ; i++)
    {
        for(int j=0 ; j<3 ; j++)
        {
            printf("%d\t", a[i][j]);

        }
        printf("\n");
    }
    printf("\n");

}




void matrixmultiply(int (*a)[3], int (*b)[3], int (*result)[3])
{

    for(int i=0 ; i<3 ; i++)
    {
        for(int j=0 ; j<3 ; j++)
        {
            result[i][j]=0;
            for(int k=0 ; k<3 ; k++)
            {
                result[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
}


int main()
{
    int a[3][3], b[3][3], result[3][3], i, j;

    printf("Enter the elements of 1st Matrix of 3x3 - \n");
    inputMatrix(a);
    printf("Enter the elements of 2nd Matrix of 3x3 - \n");
    inputMatrix(b);
    printf("First Matrix:\n");
    displayMatrix(a);
    printf("Second Matrix:\n");
    displayMatrix(b);


    matrixmultiply(a,b, result);

    printf("Resultant Matrix:\n");
    displayMatrix(result);
    getch();
    return 0;

}
