#include <stdio.h>

int main(void) {
  char string1[27];
  char string2[27] = "abcdefghijklmnopqrstuvwxyz"; 

  for (int i = 0; i < 26; i++)
  {
    string1[i] = i+97; 
  }

  if (strcmp(string1, string2) == 0) 
    printf("The strings are identicals\n");

  for (int i = 0; i < 26; i++)
  {
    string1[i] = i+65; 
  }

  if (strcmp(string1, string2) == 0) 
    printf("The strings are identicals\n");
  else 
    printf("The strings are not identicals\n");

  char string3[57];
  strcpy(string3, string2);
  strcat(string3, string1);
    
  printf("%s\n", string1);
  printf("%s\n", string2);
  printf("%s\n", string3);

  
