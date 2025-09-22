/*Q66: Insert an element in a sorted array at the appropriate position.

/*
Sample Test Cases:
Input 1:
5
1 2 4 5 6
3
Output 1:
1 2 3 4 5 6

*/

#include <stdio.h>

void insert_in_sorted_array(int arr[], int *size, int element)
{
    int i;
    for (i = *size - 1; (i >= 0 && arr[i] > element); i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[i + 1] = element;
    (*size)++;
}

int main(void)
{
    int n;
    scanf("%d", &n);
    int arr[n + 1]; // Extra space for the new element
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    int element;
    scanf("%d", &element);
    insert_in_sorted_array(arr, &n, element);
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    return 0;
}