//Q113: Write a program to take an integer array arr and an integer k as inputs. The task is to find the kth smallest element in the array. Print the kth smallest element as output.

/*
Sample Test Cases:
Input 1:
arr[] = [10, 5, 4, 3, 48, 6, 2, 33, 53, 10], k = 4
Output 1:
5

Input 2:
arr[] = [7, 10, 4, 3, 20, 15], k = 3
Output 2:
7

*/
#include <stdio.h>
void sort_array(int arr[], int n) {
    // Simple Bubble Sort
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j+1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
int kth_smallest(int arr[], int n, int k) {
    sort_array(arr, n);
    return arr[k - 1]; // k is 1-based index
}
int main() {
    int arr[] = {10, 5, 4, 3, 48, 6, 2, 33, 53, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k;
    
    printf("Enter the value of k: ");
    scanf("%d", &k);
    
    if (k <= 0 || k > n) {
        printf("Invalid value of k.\n");
        return 1;
    }
    
    int result = kth_smallest(arr, n, k);
    
    printf("The %dth smallest element is: %d\n", k, result);
    return 0;
}