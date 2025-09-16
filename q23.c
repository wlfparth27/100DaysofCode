//Q23: Write a program to calculate library fine based on late days as follows: 
//First 5 days late: ₹2/day 
//Next 5 days late: ₹4/day 
//Next 20 days days late: ₹6/day 
//More than 30 days: Membership Cancelled.

/*
Sample Test Cases:
Input 1:
4
Output 1:
Fine ₹8

Input 2:
8
Output 2:
Fine ₹22

Input 3:
15
Output 3:
Fine ₹60

Input 4:
31
Output 4:
Membership Cancelled

*/

#include <stdio.h>

int main(void)
{
    int late_days;
    printf("Enter number of late days: ");
    scanf("%d", &late_days);

    if (late_days <= 5) {
        printf("Fine ₹%d\n", late_days * 2);
    } else if (late_days <= 10) {
        printf("Fine ₹%d\n", (5 * 2) + ((late_days - 5) * 4));
    } else if (late_days <= 30) {
        printf("Fine ₹%d\n", (5 * 2) + (5 * 4) + ((late_days - 10) * 6));
    } else {
        printf("Membership Cancelled\n");
    }

    return 0;
}