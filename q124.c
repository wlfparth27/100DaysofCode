//Q124: Take two filenames from the user – a source file and a destination file. Copy all the content from the source file to the destination file using fgetc() and fputc().

/*
Sample Test Cases:
Input 1:
Source File: source.txt (Content: Learning C File Handling)
Output 1:
File copied successfully to destination.txt

*/
#include <stdio.h>
int main() 
{
    FILE *sourceFile, *destFile;
    char sourceFilename[100], destFilename[100];
    char ch;

    // Take source and destination filenames from user
    printf("Enter source filename: ");
    scanf("%s", sourceFilename);
    printf("Enter destination filename: ");
    scanf("%s", destFilename);

    // Open the source file in read mode
    sourceFile = fopen(sourceFilename, "r");
    if (sourceFile == NULL) {
        printf("Error opening source file!\n");
        return 1;
    }

    // Open the destination file in write mode
    destFile = fopen(destFilename, "w");
    if (destFile == NULL) {
        printf("Error opening destination file!\n");
        fclose(sourceFile);
        return 1;
    }

    // Copy content from source file to destination file
    while ((ch = fgetc(sourceFile)) != EOF) {
        fputc(ch, destFile);
    }

    // Close both files
    fclose(sourceFile);
    fclose(destFile);

    // Confirm that the file was copied successfully
    printf("File copied successfully to %s\n", destFilename);

    return 0;
}
