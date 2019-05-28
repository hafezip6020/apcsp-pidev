#include <stdio.h>

int main()
{
    float radius;
    float area;
 
    printf("Enter the radius of a circle \n");
    scanf("%f", &radius);
    area = 3.14 * radius * radius;
    printf("Area of a circle = %f\n", area);
}
