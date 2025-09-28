/*Q78: Find the sum of main diagonal elements for a square matrix.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
15

*/

#include <stdio.h>

int main(void)
{
    int rows, cols, i, j, sum = 0;
    scanf("%d %d", &rows, &cols);
    if (rows != cols)
    {
        printf("Error: Matrix is not square.\n");
        return 1;
    }
    int matrix[rows][cols];
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    for (i = 0; i < rows; i++)
    {
        sum += matrix[i][i];
    }
    printf("%d\n", sum);
    return 0;
}
