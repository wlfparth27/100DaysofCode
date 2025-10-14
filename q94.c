/*Q94: Find the longest word in a sentence.

/*
Sample Test Cases:
Input 1:
I love programming
Output 1:
programming

*/

#include <stdio.h>
#include <string.h>

int main() {
    char str[200], longest[100], current[100];
    int max_length = 0, current_length = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    int i = 0, j = 0;
    while (1) {
        if (str[i] != ' ' && str[i] != '\n' && str[i] != '\0') {
            current[j++] = str[i];
            current_length++;
        } else {
            if (current_length > max_length) {
                max_length = current_length;
                current[j] = '\0';
                strcpy(longest, current);
            }
            j = 0;
            current_length = 0;
        }
        if (str[i] == '\0') {
            break;
        }
        i++;
    }

    printf("Longest word: %s\n", longest);
    return 0;
}