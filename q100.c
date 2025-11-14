//Q100: Print all sub-strings of a string.

/*
Sample Test Cases:
Input 1:
abc
Output 1:
a,ab,abc,b,bc,c

*/
#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    int n = strlen(str);
    // Remove newline character if present
    if (str[n - 1] == '\n') {
        str[n - 1] = '\0';
        n--;
    }

    printf("Sub-strings: ");
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            for (int k = i; k <= j; k++) {
                putchar(str[k]);
            }
            printf(",");
        }
    }
    printf("\n");
    return 0;
}