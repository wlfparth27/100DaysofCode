//Q111: Write a program to take an integer array arr and an integer k as inputs. The task is to find the first negative integer in each subarray of size k moving from left to right. If no negative exists in a window, print "0" for that window. Print the results separated by spaces as output.

/*
Sample Test Cases:
Input 1:
arr[] = [-8, 2, 3, -6, 10], k = 2
Output 1:
-8 0 -6 -6

Input 2:
arr[] = [12, -1, -7, 8, -15, 30, 16, 28], k = 3
Output 2:
-1 -1 -7 -15 -15 0

Input 3:
arr[] = [12, 1, 3, 5], k = 3
Output 3:
0 0

*/
#include <stdio.h>
void first_negative_in_subarrays(int arr[], int n, int k, int result[]) {
    for (int i = 0; i <= n - k; i++) {
        result[i] = 0; // Default value if no negative number is found
        for (int j = 0; j < k; j++) {
            if (arr[i + j] < 0) {
                result[i] = arr[i + j];
                break; // Stop at the first negative number
            }
        }
    }
}
int main() {
    int arr[] = {12, -1, -7, 8, -15, 30, 16, 28};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k;
    
    printf("Enter the size of subarray k: ");
    scanf("%d", &k);
    
    if (k > n || k <= 0) {
        printf("Invalid subarray size k.\n");
        return 1;
    }
    
    int result[n - k + 1];
    first_negative_in_subarrays(arr, n, k, result);
    
    printf("First negative integers in each subarray of size %d: ", k);
    for (int i = 0; i <= n - k; i++) {
        printf("%d", result[i]);
        if (i < n - k) {
            printf(" ");
        }
    }
    printf("\n");
    return 0;
}