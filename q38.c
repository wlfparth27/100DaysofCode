//Q38: Write a program to find the sum of digits of a number.

/*
Sample Test Cases:
Input 1:
123
Output 1:
6

Input 2:
999
Output 2:
27

*/

#include <stdio.h>

int main(void) 
{
    int number, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &number);

    while (number != 0) {
        sum += number % 10;
        number /= 10;
    }

    printf("%d\n", sum);
    return 0;
}