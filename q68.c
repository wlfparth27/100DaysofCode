/*Q68: Delete an element from an array.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
1 2 4 5

*/

#include <stdio.h>

void delete_at_position(int arr[], int *size, int position)
{
    for (int i = position; i < *size - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    (*size)--;
}

int main(void)
{
    int n;
    scanf("%d", &n);
    int arr[n]; // No extra space needed for deletion
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    int position;
    scanf("%d", &position);
    delete_at_position(arr, &n, position);
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    return 0;
}