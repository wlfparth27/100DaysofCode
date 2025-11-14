//Q114: Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.

/*
Sample Test Cases:
Input 1:
s = "abcabcbb"
Output 1:
3

Input 2:
s = "bbbbb"
Output 2:
1

Input 3:
s = "pwwkew"
Output 3:
3

*/
#include <stdio.h>
#include <string.h>

int length_of_longest_substring(char *s) {
    int n = strlen(s);
    int max_length = 0;

    for (int i = 0; i < n; i++) {
        int seen[256] = {0}; // ASCII character set
        int current_length = 0;

        for (int j = i; j < n; j++) {
            if (seen[(unsigned char)s[j]] == 1) {
                break; // Repeating character found
            }
            seen[(unsigned char)s[j]] = 1;
            current_length++;
        }

        if (current_length > max_length) {
            max_length = current_length;
        }
    }

    return max_length;
}
int main() {
    char s[200];
    
    printf("Enter a string: ");
    fgets(s, sizeof(s), stdin);
    
    // Remove newline character if present
    int n = strlen(s);
    if (s[n - 1] == '\n') {
        s[n - 1] = '\0';
    }
    
    int result = length_of_longest_substring(s);
    
    printf("Length of the longest substring without repeating characters: %d\n", result);
    return 0;
}
