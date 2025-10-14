/*Q93: Check if two strings are anagrams of each other.

/*
Sample Test Cases:
Input 1:
listen
silent
Output 1:
Anagrams

Input 2:
hello
world
Output 2:
Not anagrams

*/

#include <stdio.h>
#include <string.h>

int are_anagrams(char *str1, char *str2) {
    int count[256] = {0}; 

    for (int i = 0; str1[i] != '\0'; i++) {
        count[(unsigned char)str1[i]]++;
    }

    for (int i = 0; str2[i] != '\0'; i++) {
        count[(unsigned char)str2[i]]--;
    }

    for (int i = 0; i < 256; i++) {
        if (count[i] != 0) {
            return 0; 
        }
    }
    return 1; 
}