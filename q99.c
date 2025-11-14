//Q99: Change the date format from dd/04/yyyy to dd-Apr-yyyy.

/*
Sample Test Cases:
Input 1:
15/04/2025
Output 1:
15-Apr-2025

*/

#include <stdio.h>
#include <string.h>

int main() {
    char date[20];
    
    printf("Enter a date (dd/04/yyyy): ");
    fgets(date, sizeof(date), stdin);
    
    // Replace "/04/" with "-Apr-"
    for (int i = 0; i < strlen(date); i++) {
        if (date[i] == '/' && date[i + 1] == '0' && date[i + 2] == '4' && date[i + 3] == '/') {
            date[i] = '-';
            date[i + 1] = 'A';
            date[i + 2] = 'p';
            date[i + 3] = 'r';
            date[i + 4] = '-';
            break;
        }
    }
    
    printf("Formatted date: %s", date);
    return 0;
}