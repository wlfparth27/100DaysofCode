/*Q79: Perform diagonal traversal of a matrix.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
1 2 4 7 5 3 6 8 9

*/

#include <stdio.h>

int main(void)
{
    int rows, cols, i, j, k;
    scanf("%d %d", &rows, &cols);
    int matrix[rows][cols];
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    for (k = 0; k <= rows + cols - 2; k++)
    {
        if (k % 2 == 0)
        {
            for (i = (k < rows) ? k : rows - 1, j = k - i; i >= 0 && j < cols; i--, j++)
            {
                if (j >= 0)
                    printf("%d ", matrix[i][j]);
            }
        }
        else
        {
            for (j = (k < cols) ? k : cols - 1, i = k - j; j >= 0 && i < rows; j--, i++)
            {
                if (i >= 0)
                    printf("%d ", matrix[i][j]);
            }
        }
    }
    printf("\n");
    return 0;
}