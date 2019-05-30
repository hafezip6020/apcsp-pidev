#include <stdio.h>

int arrayAdd(int arr[], int s, int n)
{
  int x;
  for (int i = 0; i < s; i++)
  {
    x = arr[i] + n;
    arr[i] = x; 
  }
  return 0;
} 



int main()
{
  
  int arr[100];
  
  for (int i = 0; i < 100; i++)
  {
    arr[i] = i * i;
  }
  
  for (int i = 0; i < 100; i++)
  {
    printf("%d\n", arr[i]);
  }
  
  arrayAdd(arr, 100, 5);
  for (int t = 0; t < 100; t++)
  {
    printf("%d\n", arr[t]);
  }
  
}
