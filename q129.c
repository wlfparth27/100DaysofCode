//Q129: A file numbers.txt contains a list of integers separated by spaces. Read all integers, compute their sum and average, and print both.

/*
Sample Test Cases:
Input 1:
File: numbers.txt (Content: 10 20 30 40 50)
Output 1:
Sum = 150
Average = 30.00

*/
#include <stdio.h>
int main() 
{
    FILE *file;
    int number, sum = 0, count = 0;
    float average;

    // Open the file in read mode
    file = fopen("numbers.txt", "r");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Read integers from the file and compute sum and count
    while (fscanf(file, "%d", &number) == 1) {
        sum += number;
        count++;
    }

    // Close the file
    fclose(file);

    // Calculate average
    if (count > 0) {
        average = (float)sum / count;
    } else {
        average = 0.0;
    }

    // Print the results
    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", average);

    return 0;
}