//Q32: Write a program to check if a number is a palindrome.

/*
Sample Test Cases:
Input 1:
121
Output 1:
Palindrome

Input 2:
123
Output 2:
Not palindrome

*/

#include <stdio.h>

int main(void)
{
    int n, original, reversed = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n; 
    
    while (n != 0)
    {
        int digit = n % 10;
        reversed = reversed * 10 + digit;
        n /= 10;
    }

    if (original == reversed)
        printf("Palindrome\n");
    else
        printf("Not palindrome\n");

    return 0;
}