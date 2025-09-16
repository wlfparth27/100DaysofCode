//Q11: Write a program to input an integer and check whether it is even or odd using if–else.

/*
Sample Test Cases:
Input 1:
7
Output 1:
7 is odd

Input 2:
12
Output 2:
12 is even

*/

#include <stdio.h>

int main(void)
{
    int num;
    scanf("%d", &num);
    if (num % 2 == 0)
    {
        printf("%d is even", num);
    }
    else
    {
        printf("%d is odd", num);
    }
    return 0;
}