//Q44: Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.

/*
Sample Test Cases:
Input 1:
3
Output 1:
Approximate sum: 2.9

Input 2:
5
Output 2:
Approximate sum: 4.1

*/

#include <stdio.h>

int main(void)
{
    int n, i;
    double sum = 0.0;

    printf("Enter the number of terms: ");
    if (scanf("%d", &n) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    if (n <= 0) {
        sum = 0.0;
    } else {
        sum = 1.0;
        
        for (i = 2; i <= n; ++i) {
            sum += (double)(2 * i - 1) / (double)(2 * i);
        }
    }

    printf("Approximate sum: %.1f\n", sum);
    return 0;
}