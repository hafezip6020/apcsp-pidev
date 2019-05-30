#include <stdio.h>

float areaofcircle(float radius)
{
  float area;
  area = 3.14 * radius * radius;
  return area;
} 

int main()
{


    for (float i = 3.5; i < 12.5; i++)
  {
    float radius = i;
    float area = areaofcircle(radius);
     printf("Area of a circle = %f\n", area); 
  }
  return 0;
} 

