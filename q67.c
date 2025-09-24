/*Q67: Insert an element in an array at a given position.

/*
Sample Test Cases:
Input 1:
4
10 20 30 40
2 15
Output 1:
10 20 15 30 40

*/

#include <stdio.h>

void insert_at_position(int arr[], int *size, int position, int element)
{
    for (int i = *size; i > position; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[position] = element;
    (*size)++;
}

int main(void)
{
    int n;
    scanf("%d", &n);
    int arr[n + 1]; // Extra space for the new element
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    int position, element;
    scanf("%d %d", &position, &element);
    insert_at_position(arr, &n, position, element);
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    return 0;
}