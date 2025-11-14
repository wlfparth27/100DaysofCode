/*Q108: Write a Program to take an integer array nums. Print an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i]. The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.

/*
Sample Test Cases:
Input 1:
nums = [1,2,3,4]
Output 1:
[24,12,8,6]

Input 2:
nums = [-1,1,0,-3,3]
Output 2:
[0,0,9,0,0]

*/
#include <stdio.h>
void product_array(int nums[], int n, int result[]) {
    int left_product[n];
    int right_product[n];
    
    // Initialize left and right product arrays
    left_product[0] = 1;
    right_product[n - 1] = 1;
    
    // Fill left product array
    for (int i = 1; i < n; i++) {
        left_product[i] = left_product[i - 1] * nums[i - 1];
    }
    
    // Fill right product array
    for (int i = n - 2; i >= 0; i--) {
        right_product[i] = right_product[i + 1] * nums[i + 1];
    }
    
    // Calculate result array
    for (int i = 0; i < n; i++) {
        result[i] = left_product[i] * right_product[i];
    }
}
int main() {
    int nums[] = {1, 2, 3, 4};
    int n = sizeof(nums) / sizeof(nums[0]);
    int result[n];
    
    product_array(nums, n, result);
    
    printf("Product array: [");
    for (int i = 0; i < n; i++) {
        printf("%d", result[i]);
        if (i < n - 1) {
            printf(", ");
        }
    }
    printf("]\n");
    return 0;
}
