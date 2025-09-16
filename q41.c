//Q41: Write a program to swap the first and last digit of a number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4231

Input 2:
1001
Output 2:
1001

*/

#include <stdio.h>
#include <math.h>

int main(void)
{
    int number, first_digit, last_digit, num_digits, swapped_number;

    printf("Enter a number: ");
    scanf("%d", &number);

    last_digit = number % 10;

    num_digits = 0;
    int temp = number;
    while (temp != 0) {
        temp /= 10;
        num_digits++;
    }

    first_digit = number / (int)pow(10, num_digits - 1);

    if (num_digits == 1) {
        swapped_number = number;
    } else {
        swapped_number = last_digit * (int)pow(10, num_digits - 1) + 
                         (number % (int)pow(10, num_digits - 1) - last_digit) + 
                         first_digit;
    }

    printf("%d\n", swapped_number);

    return 0;
}