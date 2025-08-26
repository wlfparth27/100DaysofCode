#include <stdio.h>

int main(void)
{
    int num[2];
    printf("Input: ");
    scanf("%d %d", &num[0], &num[1]);
    printf("Sum = %d\n", num[0] + num[1]);
    return 0;
}