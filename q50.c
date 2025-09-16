/*
Q50: Write a program to print the following pattern:
*****
  ****
    ***
      **
        *

/*
Sample Test Cases:
Input 1:

Output 1:
*****
  ****
    ***
      **
        *

Input 2:

Output 2:
Note: Spaces indicate indentation.

*/
#include <stdio.h>

int main() {
    int numberOfRows = 5;
    int row;
    int column;

    for (row = numberOfRows; row >= 1; row--) {
        for (column = 1; column <= row; column++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}