#include <stdio.h>

int main(void)
{
    int num[2];
    printf("Input: ");
    scanf("%d %d", &num[0], &num[1]);
    int sum = num[0] + num[1];
    int diff = num[0] - num[1];
    int product = num[0] * num[1];
    int quotient;
    if (num[1] == 0) 
    {
        printf("Sum = %d, ", sum);
        printf("Difference = %d, ", diff);
        printf("Product = %d, ", product);
        printf("Error: Division by zero is not possible, \n");
    }
    else
    {
        quotient = num[0] / num[1];
        printf("Sum = %d, ", sum);
        printf("Difference = %d, ", diff);
        printf("Product = %d, ", product);
        printf("Quotient = %d, \n", quotient);
    }
    return 0;
}