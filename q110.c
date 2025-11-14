//Q110: Write a program to take an integer array arr and an integer k as inputs. The task is to find the maximum element in each subarray of size k moving from left to right. Print the maximum elements for each window separated by spaces as output.

/*
Sample Test Cases:
Input 1:
arr[1, 2, 3, 1, 4, 5, 2, 3, 6] = , k = 3
Output 1:
3 3 4 5 5 5 6

Input 2:
arr[5, 1, 3, 4, 2] = , k = 1
Output 2:
5 1 3 4 2

*/
#include <stdio.h>
void max_in_subarrays(int arr[], int n, int k, int result[]) {
    for (int i = 0; i <= n - k; i++) {
        int max = arr[i];
        for (int j = 1; j < k; j++) {
            if (arr[i + j] > max) {
                max = arr[i + j];
            }
        }
        result[i] = max;
    }
}
int main() {
    int arr[] = {1, 2, 3, 1, 4, 5, 2, 3, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k;
    
    printf("Enter the size of subarray k: ");
    scanf("%d", &k);
    
    if (k > n || k <= 0) {
        printf("Invalid subarray size k.\n");
        return 1;
    }
    
    int result[n - k + 1];
    max_in_subarrays(arr, n, k, result);
    
    printf("Maximum elements in each subarray of size %d: ", k);
    for (int i = 0; i <= n - k; i++) {
        printf("%d", result[i]);
        if (i < n - k) {
            printf(" ");
        }
    }
    printf("\n");
    return 0;
}