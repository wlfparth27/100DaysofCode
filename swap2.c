//Q7: Write a program to swap two numbers without using a third variable.

/*
Sample Test Cases:
Input 1:
10 20
Output 1:
After swap: 20 10

Input 2:
7 14
Output 2:
After swap: 14 7
*/

#include <stdio.h>

int main(void)
{
    int num1, num2;
    printf("Enter numbers:");
    scanf("%d %d", &num1, &num2);
    printf("After Swap:%d %d", num2, num1);
    return 0;
}