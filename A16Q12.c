#include<stdio.h>
#include<conio.h>

void transpose(int mat[3][3], int result[3][3]) ;
void displaymatrix (int mat[3][3]);

int main()
{
    int mat[3][3]={{3,4,5}, {2,5,7,}, {3,9,1}};
    int result[3][3]={0};

    transpose(mat, result);

    printf("Transposed Matrix is : \n");
    displaymatrix(result);

    getch();
    return 0;
}

void transpose(int mat[3][3], int result[3][3])
{
    for( int i=0; i<3; i++)
    {
        for( int j=0; j<3; j++)
        {
            result[j][i]=mat[i][j];
        }
    }
}

void displaymatrix (int mat[3][3])
{
    for( int i=0; i<3; i++)
    {
        for( int j=0; j<3; j++)
        {
            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }
}
