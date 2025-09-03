//Q8: Write a program to find and display the sum of the first n natural numbers.

/*
Sample Test Cases:
Input 1:
5
Output 1:
Sum=15

Input 2:
10
Output 2:
Sum=55
*/

#include <stdio.h>

int main(void)
{
    int num = 0, sum = 0;
    printf("Enter number: ");
    scanf("%d", &num);
    do
    {
        sum += num;
        num--;
    } 
    while (num > 0);
    printf("Sum=%d", sum);
}