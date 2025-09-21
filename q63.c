/*Q63: Merge two arrays.

/*
Sample Test Cases:
Input 1:
3
1 2 3
2
4 5
Output 1:
1 2 3 4 5

*/

#include <stdio.h>

int main(void)
{
    int n1, n2, i;
    scanf("%d", &n1);
    int arr1[n1];
    for (i = 0; i < n1; i++)
    {
        scanf("%d", &arr1[i]);
    }
    scanf("%d", &n2);
    int arr2[n2];
    for (i = 0; i < n2; i++)
    {
        scanf("%d", &arr2[i]);
    }
    for (i = 0; i < n1; i++)
    {
        printf("%d ", arr1[i]);
    }
    for (i = 0; i < n2; i++)
    {
        printf("%d ", arr2[i]);
    }
    return 0;
}