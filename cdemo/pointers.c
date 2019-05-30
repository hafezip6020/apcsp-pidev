
#include <stdio.h>

int main()
{
  
  int a;
  int* ptrtoa;

  ptrtoa = &a;

  a = 5;
  printf("The value of a is %d\n", a);

  *ptrtoa = 6;
  printf("The value of a is %d\n", a);

  printf("The value of ptrtoa is %d\n", ptrtoa);
  printf("It stores the value %d\n", *ptrtoa);
  printf("The address of a is %d\n", &a);
  
  float d = 12.5;
  float e = 42.3;
  printf("The value of d is %f\n", d);
  printf("The address of d is %d\n", &d);
  printf("The value of e is %f\n", e);
  printf("The address of e is %d\n", &e);  
  
  int* ptrtod;
  ptrtod = &d;
  
  int* ptrtoe;
  ptrtoe = &e;
  
  printf("The value of ptrtoa is %d\n", ptrtod);
  printf("It stores the value %d\n", *ptrtod);
  printf("The value of ptrtoa is %d\n", ptrtoe);
  printf("It stores the value %d\n", *ptrtoe); 



}
