/*Q51: Write a program to print the following pattern:
    5
   45
  345
 2345
12345
*/

/*
Sample Test Cases:
Input 1:

Output 1:
    5
   45
  345
 2345
12345

*/

#include <stdio.h>

int main(void)
{
    int numberOfRows = 5;
    int row, column, space;

    for (row = 1; row <= numberOfRows; row++) {
        for (space = 1; space <= numberOfRows - row; space++) {
            printf(" ");
        }
        for (column = numberOfRows - row + 1; column <= numberOfRows; column++) {
            printf("%d", column);
        }
        printf("\n");
    }

    return 0;
}