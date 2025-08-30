#include <stdio.h>

int main(void)
{
    float width, length;
    printf("Enter width and length of the rectangle: ");
    scanf("%f %f", &width,  &length);
    /*printf("Area of the rectangle: %d\n", width * length);
    printf("Perimeter of the rectangle: %d\n", 2 * (width + length));*/
    printf("Area=%f, Perimeter=%f", (width * length), 2 * (width + length));
    return 0; 
}