//Q123: Read a text file and count the total number of characters, words, and lines. A word is defined as a sequence of non-space characters separated by spaces or newlines.

/*
Sample Test Cases:
Input 1:
File: sample.txt (Content: Hello world\nThis is C programming)
Output 1:
Characters: 31
Words: 5
Lines: 2

*/
#include <stdio.h>
int main() 
{
    FILE *file;
    char ch;
    int characters = 0, words = 0, lines = 0;
    int in_word = 0;

    // Open the file in read mode
    file = fopen("sample.txt", "r");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Read the file character by character
    while ((ch = fgetc(file)) != EOF) {
        characters++;

        if (ch == '\n') {
            lines++;
        }

        if (ch == ' ' || ch == '\n' || ch == '\t') {
            in_word = 0; // Outside a word
        } else {
            if (in_word == 0) {
                words++; // Start of a new word
                in_word = 1; // Inside a word
            }
        }
    }

    // If the file is not empty, count the last line if it doesn't end with a newline
    if (characters > 0 && ch != '\n') {
        lines++;
    }

    // Close the file
    fclose(file);

    // Print the results
    printf("Characters: %d\n", characters);
    printf("Words: %d\n", words);
    printf("Lines: %d\n", lines);

    return 0;
}