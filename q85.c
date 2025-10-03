/*Q85: Reverse a string.

/*
Sample Test Cases:
Input 1:
abcd
Output 1:
dcba

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
    for (int i = len - 1; i >= 0; i--)
    {
        putchar(str[i]);
    }
    putchar('\n');
    return 0;
}