
#include <stdio.h>

int main()
{
  int a = 0;
  int b = 5;

  // if statement to test is a is equal to 0
  if (a == b)
  {
    printf("a is equal to b\n");
  }
 if (a != b)
  {
    printf("a is not equal to b\n");
  }
 if (b >= a)
  {
    printf("b is greater or equal to a\n");
  }        
 if (b > a)
  {
    printf("b is greater than a\n");
  }          
 if (b >= a)
  {
    printf("b is greater or equal to a\n");
  }
  if (b == 0 && a == 0)
  {
    printf("b and a are equal to zero\n");
  }                   
  if (b == 0 || a == 0)
  {
    printf("b or a is equal to zero\n");
  }
  if (!(b == 0))
  {
    printf("b is not equal to zero\n");
  }            
}

