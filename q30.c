//Q30: Write a program to reverse a given number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4321

Input 2:
100
Output 2:
1

*/

#include <stdio.h>

int main(void)
{
    int n, reversed = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n != 0)
    {
        int digit = n % 10;
        reversed = reversed * 10 + digit;
        n /= 10;
    }

    printf("%d\n", reversed);

    return 0;
}