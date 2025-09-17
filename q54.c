/*Q54: Write a program to print the following pattern:

   *
  ***
 *****
*******
 *****
  ***
   *


/*
Sample Test Cases:
Input 1:

Output 1:
Pattern with layers of stars as shown.

*/

#include <stdio.h>

int main(void) 
{
    int i, j, k;
    int pattern[] = {1, 3, 5, 7, 5, 3, 1};
    int max_stars = pattern[3]; // The maximum number of stars in the middle row

    for (i = 0; i < 7; i++) 
    {
        int spaces = (max_stars - pattern[i]) / 2; // Calculate leading spaces
        for (k = 0; k < spaces; k++) 
        {
            printf(" "); // Print leading spaces
        }
        for (j = 0; j < pattern[i]; j++) 
        {
            printf("*"); // Print stars
        }
        printf("\n");
    }

    return 0;
}