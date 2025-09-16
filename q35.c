//Q35: Write a program to print all factors of a given number.

/*
Sample Test Cases:
Input 1:
6
Output 1:
1 2 3 6

Input 2:
10
Output 2:
1 2 5 10

*/

#include <stdio.h>

int main(void) 
{
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    for (int i = 1; i <= number; i++) {
        if (number % i == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}