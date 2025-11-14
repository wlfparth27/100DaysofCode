//Q117: Write a program to take two sorted arrays of size m and n as input. Merge both the arrays such that the merged array is also sorted. Print the merged array.

/*
Sample Test Cases:
Input 1:
nums1 = [2,7,11,15] nums2 = [4,8,10]
Output 1:
2 4 7 8 10 11 15

Input 2:
nums1 = [1,2,7] nums2 = [9,10,17]
Output 2:
1 2 7 9 10 17

Input 3:
nums1 = [-10,-2,7] nums2 = [-3, -1, 7]
Output 3:
-10 -3 -2 -1 7 7

*/

#include <stdio.h>

void merge_sorted_arrays(int* nums1, int m, int* nums2, int n, int* merged) {
    int i = 0, j = 0, k = 0;

    // Merge the two arrays
    while (i < m && j < n) {
        if (nums1[i] < nums2[j]) {
            merged[k++] = nums1[i++];
        } else {
            merged[k++] = nums2[j++];
        }
    }

    // Copy remaining elements of nums1, if any
    while (i < m) {
        merged[k++] = nums1[i++];
    }

    // Copy remaining elements of nums2, if any
    while (j < n) {
        merged[k++] = nums2[j++];
    }
}
int main() {
    int nums1[100], nums2[100], merged[200];
    int m, n;

    printf("Enter the number of elements in the first sorted array: ");
    scanf("%d", &m);
    printf("Enter the elements of the first sorted array: ");
    for (int i = 0; i < m; i++) {
        scanf("%d", &nums1[i]);
    }

    printf("Enter the number of elements in the second sorted array: ");
    scanf("%d", &n);
    printf("Enter the elements of the second sorted array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums2[i]);
    }

    merge_sorted_arrays(nums1, m, nums2, n, merged);

    printf("Merged sorted array: ");
    for (int i = 0; i < m + n; i++) {
        printf("%d ", merged[i]);
    }
    printf("\n");

    return 0;
}
