//Q25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

/*
Sample Test Cases:
Input 1:
4 2 +
Output 1:
6

Input 2:
10 3 %
Output 2:
1

Input 3:
15 5 /
Output 3:
3

*/

#include <stdio.h>

int main(void)
{
    int num1, num2;
    char operator;

    // Input two numbers and an operator
    printf("Enter two numbers and an operator (+, -, *, /, %%): ");
    scanf("%d %d %c", &num1, &num2, &operator);

    switch (operator)
    {
    case '+':
        printf("%d\n", num1 + num2);
        break;
    case '-':
        printf("%d\n", num1 - num2);
        break;
    case '*':
        printf("%d\n", num1 * num2);
        break;
    case '/':
        if (num2 != 0)
            printf("%d\n", num1 / num2);
        else
            printf("Error: Division by zero\n");
        break;
    case '%':
        if (num2 != 0)
            printf("%d\n", num1 % num2);
        else
            printf("Error: Division by zero\n");
        break;
    default:
        printf("Error: Invalid operator\n");
    }

    return 0;
}