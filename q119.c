//Q119: Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration.

/*
Sample Test Cases:
Input 1:
nums1 = [1,3,3,4]
Output 1:
3

Input 2:
nums1 = [1,2,2]
Output 2:
2

Input 3:
nums1 = [0,4,1,1,5]
Output 3:
1

*/
#include <stdio.h>
int find_repeated_element(int* nums, int n) {
    int seen[10000] = {0}; // Assuming the range of numbers is within 0 to 9999

    for (int i = 0; i < n; i++) {
        if (seen[nums[i]] == 1) {
            return nums[i]; // Found the repeated element
        }
        seen[nums[i]] = 1; // Mark this number as seen
    }

    return -1; // Should not reach here as per problem statement
}
int main() {
    int nums[100], n;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array (one element will be repeated): ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    int repeated_element = find_repeated_element(nums, n);
    printf("The repeated element is: %d\n", repeated_element);

    return 0;
}
