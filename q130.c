//Q130: Store multiple student records (name, roll number, marks) into a file using fprintf(). Then read them using fscanf() and display each record.

/*
Sample Test Cases:
Input 1:
Student 1 → Name: Asha, Roll: 101, Marks: 85; Student 2 → Name: Ravi, Roll: 102, Marks: 92
Output 1:
Name: Asha | Roll: 101 | Marks: 85
Name: Ravi | Roll: 102 | Marks: 92

*/
#include <stdio.h>
int main() 
{
    FILE *file;
    char name[100];
    int roll;
    float marks;
    int n;

    // Take number of student records to input
    printf("Enter the number of student records to input: ");
    scanf("%d", &n);
    getchar(); // Clear newline character from buffer

    // Open the file in write mode to store student records
    file = fopen("students.txt", "w");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Input student records and write to file
    for (int i = 0; i < n; i++) {
        printf("Enter details for student %d:\n", i + 1);
        printf("Name: ");
        fgets(name, sizeof(name), stdin);
        // Remove newline character from name if present
        int len = strlen(name);
        if (len > 0 && name[len - 1] == '\n') {
            name[len - 1] = '\0';
        }
        printf("Roll Number: ");
        scanf("%d", &roll);
        printf("Marks: ");
        scanf("%f", &marks);
        getchar(); // Clear newline character from buffer

        // Write the record to the file
        fprintf(file, "%s %d %.2f\n", name, roll, marks);
    }

    // Close the file after writing
    fclose(file);

    // Open the file in read mode to display student records
    file = fopen("students.txt", "r");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("\nStudent Records:\n");
    // Read and display each record from the file
    while (fscanf(file, "%s %d %f", name, &roll, &marks) == 3) {
        printf("Name: %s | Roll: %d | Marks: %.2f\n", name, roll, marks);
    }

    // Close the file after reading
    fclose(file);

    return 0;
}