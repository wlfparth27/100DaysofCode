//Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.

/*
Sample Test Cases:
Input 1:
3661
Output 1:
1:1:1

Input 2:
7322
Output 2:
2:2:2

*/

#include <stdio.h>

int main(void)
{
    int hours, minutes, seconds, time;
    printf("Enter time in seconds: ");
    scanf("%d", &time);
    hours = time / 3600;
    minutes = (time % 3600) / 60;
    seconds = time % 60;

    printf("%d:%d:%d", hours, minutes, seconds);

    return 0;
}