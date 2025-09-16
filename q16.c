//Q16: Write a program to input three numbers and find the largest among them using if–else.

/*
Sample Test Cases:
Input 1:
3 7 5
Output 1:
Largest is 7

Input 2:
-1 -5 0
Output 2:
Largest is 0

*/

#include <stdio.h>

int main() {
    int num1, num2, num3;

    // Input three numbers
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Find the largest number using if-else
    if (num1 >= num2 && num1 >= num3) {
        printf("Largest is %d\n", num1);
    } else if (num2 >= num1 && num2 >= num3) {
        printf("Largest is %d\n", num2);
    } else {
        printf("Largest is %d\n", num3);
    }

    return 0;
}