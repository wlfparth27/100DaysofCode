//Q115: Write a program to take two strings s and t as inputs (assume all characters are lowercase). The task is to determine if s and t are valid anagrams, meaning they contain the same characters with the same frequencies. Print "Anagram" if they are, otherwise "Not Anagram".

/*
Sample Test Cases:
Input 1:
s = "anagram", t = "nagaram"
Output 1:
Anagram

Input 2:
s = "rat", t = "car"
Output 2:
Not Anagram

*/
#include <stdio.h>
#include <string.h>

int are_anagrams(char *s, char *t) {
    int count[26] = {0}; // Assuming only lowercase letters a-z

    // Count frequency of each character in s
    for (int i = 0; s[i] != '\0'; i++) {
        count[s[i] - 'a']++;
    }

    // Subtract frequency of each character in t
    for (int i = 0; t[i] != '\0'; i++) {
        count[t[i] - 'a']--;
    }

    // Check if all counts are zero
    for (int i = 0; i < 26; i++) {
        if (count[i] != 0) {
            return 0; // Not an anagram
        }
    }

    return 1; // Anagram
}
int main() {
    char s[200], t[200];
    
    printf("Enter first string (s): ");
    fgets(s, sizeof(s), stdin);
    printf("Enter second string (t): ");
    fgets(t, sizeof(t), stdin);
    
    // Remove newline characters if present
    int n = strlen(s);
    if (s[n - 1] == '\n') {
        s[n - 1] = '\0';
    }
    n = strlen(t);
    if (t[n - 1] == '\n') {
        t[n - 1] = '\0';
    }
    
    if (are_anagrams(s, t)) {
        printf("Anagram\n");
    } else {
        printf("Not Anagram\n");
    }
    
    return 0;
}
