#include<stdio.h>

int main()
{
  int a = 545;
  char x = 'p';
  float f = 12.345;
  double d = 123.456;

  printf("int a value: %d and size: %lu bytes\n", a, sizeof(a));
  printf("int a value: %c and size: %lu bytes\n", x, sizeof(x));
  printf("int a value: %f and size: %lu bytes\n", f, sizeof(f));
  printf("int a value: %lf and size: %lu bytes\n", d, sizeof(d));  
}
