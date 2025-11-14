//Q97: Print the initials of a name.

/*
Sample Test Cases:
Input 1:
John Doe
Output 1:
J.D.

*/
#include <stdio.h>
#include <string.h>

int main() {
    char name[200];
    
    printf("Enter a name: ");
    fgets(name, sizeof(name), stdin);
    
    int n = strlen(name);
    printf("Initials: ");
    
    for (int i = 0; i < n; i++) {
        // Print the first character and any character following a space
        if (i == 0 || (name[i - 1] == ' ' && name[i] != ' ' && name[i] != '\n')) {
            printf("%c.", name[i]);
        }
    }
    
    printf("\n");
    return 0;
}