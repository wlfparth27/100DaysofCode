/*Q86: Check if a string is a palindrome.

/*
Sample Test Cases:
Input 1:
madam
Output 1:
Palindrome

Input 2:
hello
Output 2:
Not palindrome

*/

#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[1000];
    fgets(str, sizeof(str), stdin);
    int len = strlen(str);
    if (len > 0 && str[len - 1] == '\n')
    {
        str[len - 1] = '\0'; 
        len--;
    }
    int is_palindrome = 1;
    for (int i = 0; i < len / 2; i++)
    {
        if (str[i] != str[len - 1 - i])
        {
            is_palindrome = 0;
            break;
        }
    }
    if (is_palindrome)
    {
        printf("Palindrome\n");
    }
    else
    {
        printf("Not palindrome\n");
    }
    return 0;
}