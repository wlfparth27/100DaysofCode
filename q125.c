//Q125: Open an existing file in append mode and allow the user to enter a new line of text. Append the text at the end without overwriting existing content.

/*
Sample Test Cases:
Input 1:
Existing File: data.txt (Content before execution: Hello world)
User Input: This is appended text.
Output 1:
File updated successfully with appended text.

*/
#include <stdio.h>
int main() 
{
    FILE *file;
    char line[200];

    // Open the file in append mode
    file = fopen("data.txt", "a");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Take user input for the new line of text
    printf("Enter a line of text to append: ");
    getchar(); // Clear the newline character from previous input
    fgets(line, sizeof(line), stdin);

    // Append the text to the file
    fputs(line, file);

    // Close the file
    fclose(file);

    // Confirm that the text was appended successfully
    printf("File updated successfully with appended text.\n");

    return 0;
}