//Q12: Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.

/*
Sample Test Cases:
Input 1:
-5
Output 1:
Negative

Input 2:
0
Output 2:
Zero

Input 3:
10
Output 3:
Positive

*/

#include <stdio.h>

int main(void)
{
    int num;
    scanf("%d", &num);
    if (num >= 0)
    {
        if (num == 0)
        {
            printf("Zero");
        }
        else
        {
            printf("Positive");
        }
    }
    else
    {
        printf("Negative");
    }
    return 0;
}