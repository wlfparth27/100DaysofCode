/*Q72: Find the sum of all elements in a matrix.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
21

*/

#include <stdio.h>

int main(void)
{
    int rows, cols, i, j, sum = 0;
    scanf("%d %d", &rows, &cols);
    int matrix[rows][cols];
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            scanf("%d", &matrix[i][j]);
            sum += matrix[i][j];
        }
    }
    printf("%d\n", sum);
    return 0;
}