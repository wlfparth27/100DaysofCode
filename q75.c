/*Q75: Add two matrices.

/*
Sample Test Cases:
Input 1:
2 2
1 2
3 4
2 2
5 6
7 8
Output 1:
6 8
10 12

*/

#include <stdio.h>

int main(void)
{
    int rows1, cols1, rows2, cols2, i, j;
    scanf("%d %d", &rows1, &cols1);
    int matrix1[rows1][cols1];
    for (i = 0; i < rows1; i++)
    {
        for (j = 0; j < cols1; j++)
        {
            scanf("%d", &matrix1[i][j]);
        }
    }
    scanf("%d %d", &rows2, &cols2);
    if (rows1 != rows2 || cols1 != cols2)
    {
        printf("Error: Matrices dimensions do not match for addition.\n");
        return 1;
    }
    int matrix2[rows2][cols2];
    for (i = 0; i < rows2; i++)
    {
        for (j = 0; j < cols2; j++)
        {
            scanf("%d", &matrix2[i][j]);
        }
    }
    int sum[rows1][cols1];
    for (i = 0; i < rows1; i++)
    {
        for (j = 0; j < cols1; j++)
        {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
    for (i = 0; i < rows1; i++)
    {
        for (j = 0; j < cols1; j++)
        {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}