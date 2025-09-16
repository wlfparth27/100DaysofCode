//Q28: Write a program to print the product of even numbers from 1 to n.

/*
Sample Test Cases:
Input 1:
4
Output 1:
8 (2 * 4)

Input 2:
6
Output 2:
48 (2 * 4 * 6)

*/

#include <stdio.h>

int main(void)
{
    int n, product = 1;
    int first_even = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 2; i <= n; i += 2)
    {
        product *= i;
        if (!first_even) first_even = i;
    }

    if (first_even == 0)
        printf("0\n"); 
    else
        printf("%d (", product);

    if (first_even != 0) {
        for (int i = 2; i <= n; i += 2) {
            printf("%d", i);
            if (i + 2 <= n)
                printf(" * ");
        }
        printf(")\n");
    }

    return 0;
}