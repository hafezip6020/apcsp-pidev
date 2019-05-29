#include <stdio.h>

float areaofcircle(float radius)
{
  float area;
  area = 3.14 * radius * radius;
  return area;
} 

int main()
{
  float low;
  float up;

  printf("Enter the lower end of the range\n");
  scanf("%f", &low);
  printf("Enter the uper end of the range\n");
  scanf("%f", &up);

    for (float i = low; i < up; i++)
  {
    float radius = i;
    float area = areaofcircle(radius);
     printf("Area of a circle = %f\n", area);
  }
  return 0;
} 
