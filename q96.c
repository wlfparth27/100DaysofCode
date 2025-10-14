/*Q96: Reverse each word in a sentence without changing the word order.

/*
Sample Test Cases:
Input 1:
I love coding
Output 1:
I evol gnidoc

*/

#include <stdio.h>
#include <string.h>

void reverse_word(char *start, char *end) {
    while (start < end) {
        char temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}
int main() {
    char str[200];
    
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);
    
    int n = strlen(str);
    int start = 0;

    for (int i = 0; i <= n; i++) {
        if (str[i] == ' ' || str[i] == '\n' || str[i] == '\0') {
            reverse_word(&str[start], &str[i - 1]);
            start = i + 1;
        }
    }

    printf("Sentence with each word reversed: %s", str);
    return 0;
}