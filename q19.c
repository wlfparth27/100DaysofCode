//Q19: Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.

/*
Sample Test Cases:
Input 1:
3 3 3
Output 1:
Equilateral

Input 2:
3 3 4
Output 2:
Isosceles

Input 3:
2 3 4
Output 3:
Scalene

*/

#include <stdio.h>

int main(void)
{
    float side[3];
    printf("Enter sides of triangle separated by spaces: ");
    scanf("%f %f %f", &side[0], &side[1], &side[2]);
    if (side[0] + side[1] <= side[2] || side[1] + side[2] <= side[0] || side[0] + side[2] <= side[1])
    {
        printf("Invalid Triangle\n");
        return 1;
    }
    if (side[0] == side[1] && side[1] == side[2])
    {
        printf("Equilateral\n");
    }
    else if ((side[0]*side[0]) + (side[1]*side[1]) == (side[2]*side[2]) || (side[1]*side[1]) + (side[2]*side[2]) == (side[0]*side[0]) || (side[0]*side[0]) + (side[2]*side[2]) == (side[1]*side[1]))
    {
        printf("Right Angled\n");
    }
    else if ((side[0] == side[1]) || (side[1] == side[2]) || (side[0] == side[2]))
    {
        printf("Isoceles\n");
    }
    else 
    {
        printf("Scalene\n");
    }
    return 0;
}