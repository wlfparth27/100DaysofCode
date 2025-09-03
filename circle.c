/*Write a program to calculate the area and circumference of a circle given its radius.*/

#include <stdio.h>

int main(void)
{
    float radius;
    printf("Enter Radius: ");
    scanf("%f", &radius);
    float circumference = 2 * (22/7) * radius;
    float area = (22/7) * (radius * radius);
    printf("Area=%.2f, Circumference=%.2f\n", area, circumference);
    return 0;
}