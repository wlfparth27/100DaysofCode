//Q42: Write a program to check if a number is a perfect number.

/*
Sample Test Cases:
Input 1:
6
Output 1:
Perfect number

Input 2:
10
Output 2:
Not perfect number

*/

#include <stdio.h>

int main(void)
{
    int number, sum_of_divisors = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    for (int i = 1; i <= number / 2; i++) {
        if (number % i == 0) {
            sum_of_divisors += i;
        }
    }

    if (sum_of_divisors == number) {
        printf("Perfect number\n");
    } else {
        printf("Not perfect number\n");
    }

    return 0;
}