//Q116: Write a program to take an integer array nums which contains only positive integers, and an integer target as inputs. The goal is to find two distinct indices i and j in the array such that nums[i] + nums[j] equals the target. Assume exactly one solution exists and return the indices in any order. Print the two indices separated by a space as output. If no solution exists, print "-1 -1".

/*
Sample Test Cases:
Input 1:
nums = [2,7,11,15], target = 9
Output 1:
0 1

Input 2:
nums = [3,2,4], target = 6
Output 2:
1 2

Input 3:
nums = [3,3], target = 6
Output 3:
0 1

*/

#include <stdio.h>
void find_two_sum(int* nums, int numsSize, int target, int* index1, int* index2) {
    for (int i = 0; i < numsSize; i++) {
        for (int j = i + 1; j < numsSize; j++) {
            if (nums[i] + nums[j] == target) {
                *index1 = i;
                *index2 = j;
                return;
            }
        }
    }
    *index1 = -1;
    *index2 = -1;
}
int main() {
    int nums[100], numsSize, target;
    
    printf("Enter the number of elements in the array: ");
    scanf("%d", &numsSize);
    
    printf("Enter the elements of the array (positive integers): ");
    for (int i = 0; i < numsSize; i++) {
        scanf("%d", &nums[i]);
    }
    
    printf("Enter the target sum: ");
    scanf("%d", &target);
    
    int index1, index2;
    find_two_sum(nums, numsSize, target, &index1, &index2);
    
    printf("%d %d\n", index1, index2);
    
    return 0;
}