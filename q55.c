/*Q55: Write a program to print all the prime numbers from 1 to n.

Sample Test Cases:
Input 1:
10
Output 1:
2 3 5 7

Input 2:
20
Output 2:
2 3 5 7 11 13 17 19

*/

#include <stdio.h>

int main(void)
{
    int n, i, j, is_prime;

    // Read the upper limit n
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Prime numbers from 1 to %d are:\n", n);
    
    for (i = 2; i <= n; i++) 
    {
        is_prime = 1; // Assume i is prime
        for (j = 2; j * j <= i; j++) 
        {
            if (i % j == 0) 
            {
                is_prime = 0; // i is not prime
                break;
            }
        }
        if (is_prime) 
        {
            printf("%d ", i); // Print the prime number
        }
    }
    printf("\n");

    return 0;
}