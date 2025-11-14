//Q128: Read a text file and count how many vowels and consonants are in the file. Ignore digits and special characters.

/*
Sample Test Cases:
Input 1:
File: text.txt (Content: Welcome to C language)
Output 1:
Vowels: 8
Consonants: 10

*/
#include <stdio.h>
#include <ctype.h>
int main() 
{
    FILE *file;
    char ch;
    int vowels = 0, consonants = 0;

    // Open the file in read mode
    file = fopen("text.txt", "r");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Read the file character by character
    while ((ch = fgetc(file)) != EOF) {
        if (isalpha(ch)) { // Check if the character is an alphabet
            ch = tolower(ch); // Convert to lowercase for uniformity
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowels++; // Increment vowel count
            } else {
                consonants++; // Increment consonant count
            }
        }
    }

    // Close the file
    fclose(file);

    // Print the results
    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);

    return 0;
}