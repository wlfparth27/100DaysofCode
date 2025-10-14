/*Q91: Remove all vowels from a string.

/*
Sample Test Cases:
Input 1:
education
Output 1:
dctn

*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int is_vowel(char ch) {
    ch = tolower(ch);
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}

int main() {
    char str[100], result[100];
    int j = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        if (!is_vowel(str[i]) && str[i] != '\n') {
            result[j++] = str[i];
        }
    }
    result[j] = '\0';

    printf("String after removing vowels: %s\n", result);
    return 0;
}