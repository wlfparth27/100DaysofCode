/*Q60: Count positive, negative, and zero elements in an array.

/*
Sample Test Cases:
Input 1:
5
-1 0 1 2 -2
Output 1:
Positive=2, Negative=2, Zero=1

*/

#include <stdio.h>

int main(void)
{
    int n, i;
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int positive_count = 0;
    int negative_count = 0;
    int zero_count = 0;
    for (i = 0; i < n; i++)
    {
        if (arr[i] > 0)
        {
            positive_count++;
        }
        else if (arr[i] < 0)
        {
            negative_count++;
        }
        else
        {
            zero_count++;
        }
    }
    printf("Positive=%d, Negative=%d, Zero=%d", positive_count, negative_count, zero_count);
    return 0;
}