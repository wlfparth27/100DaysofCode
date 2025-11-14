//Q109: Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size k.

/*
Sample Test Cases:
Input 1:
arr[100, 200, 300, 400] = , k = 2
Output 1:
700

Input 2:
arr[1, 4, 2, 10, 23, 3, 1, 0, 20] = , k = 4
Output 2:
39

Input 3:
arr[100, 200, 300, 400] = , k = 1
Output 3:
400

*/
#include <stdio.h>
int max_sum_subarray(int arr[], int n, int k) {
    int max_sum = 0;
    
    // Calculate the sum of the first subarray of size k
    for (int i = 0; i < k; i++) {
        max_sum += arr[i];
    }
    
    int current_sum = max_sum;
    
    // Slide the window over the array
    for (int i = k; i < n; i++) {
        current_sum += arr[i] - arr[i - k];
        if (current_sum > max_sum) {
            max_sum = current_sum;
        }
    }
    
    return max_sum;
}
int main() {
    int arr[] = {1, 4, 2, 10, 23, 3, 1, 0, 20};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k;
    
    printf("Enter the size of subarray k: ");
    scanf("%d", &k);
    
    if (k > n || k <= 0) {
        printf("Invalid subarray size k.\n");
        return 1;
    }
    
    int result = max_sum_subarray(arr, n, k);
    
    printf("Maximum sum of subarrays of size %d: %d\n", k, result);
    return 0;
}