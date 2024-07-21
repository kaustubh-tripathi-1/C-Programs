#include<stdio.h>
#include<conio.h>

void addmatrices(int mat1[3][3], int mat2[3][3], int result[3][3]);
void displaymatrix (int mat1[3][3]);

int main()
{
    int mat1[3][3]={{1,3,4}, {2,3,4}, {3,4,5}};
    int mat2[3][3]={{1,3,4}, {2,3,4}, {3,4,5}};
    int result[3][3];
    addmatrices(mat1, mat2, result);

    printf("Matrix 1 :\n");
    displaymatrix(mat1);
    printf("Matrix 2 :\n");
    displaymatrix(mat2);
    printf("Result :\n");
    displaymatrix(result);
    getch();
    return 0;

}

addmatrices ( int mat1[3][3], int mat2[3][3], int result[3][3] )
{
    for ( int i=0; i<3 ; i++ )
    {
        for ( int j=0; j<3 ; j++ )
        {
            result[i][j]=mat1[i][j]+mat2[i][j];
        }
    }
}

displaymatrix ( int mat[3][3] )
{
    for ( int i=0 ; i<3 ; i++ )
    {
        for ( int j=0; j<3 ; j++ )
        {
            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }
}
