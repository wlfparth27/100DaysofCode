//Q33: Write a program to check if a number is an Armstrong number.

/*
Sample Test Cases:
Input 1:
153
Output 1:
Armstrong

Input 2:
123
Output 2:
Not Armstrong

*/

#include <stdio.h>
#include <math.h>

int main(void)
{
    int n, original, sum = 0, digits = 0;

    scanf("%d", &n);

    original = n;

    if (n < 0) {
        printf("Not Armstrong\n");
        return 0;
    }
    if (n == 0) {
        printf("Armstrong\n");
        return 0;
    }

    int temp = n;
    while (temp != 0)
    {
        digits++;
        temp /= 10;
    }

    temp = n;
    while (temp != 0)
    {
        int digit = temp % 10;
        sum += (int)(round(pow(digit, digits)));
        temp /= 10;
    }

    if (original == sum)
        printf("Armstrong\n");
    else
        printf("Not Armstrong\n");

    return 0;
}