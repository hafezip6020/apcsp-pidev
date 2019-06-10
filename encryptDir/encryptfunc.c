#include <stdio.h>
#include <string.h>
#include "encryptfunc.h"

int VertShiftAlg()
{
  char keychr[1];
  int shiftVert;
  char alph[27] = "abcdefghijklmnopqrstuvwxyz";

  for (int i = 0 ; i<strlen(gblKey); i++)
    {
      keychr[0] = gblKey[i];
      for (int t = 0 ; t < 27; t++)
        {
          if(alph[t] == keychr[0])
          {
            shiftVert = t;
          }
        }
      arrShift[i] = shiftVert;
    }
return 0;
}

void append(char* s, char c)
{
        int len = strlen(s);
        s[len] = c;
        s[len+1] = '\0';
}

int AlphaShift(int i)
{

   char tmp[27];
   char alph[27] = "abcdefghijklmnopqrstuvwxyz";
   int shift;
   shift = 27-i;

   strncpy(tmp, alph+i, shift);
   strcat(cph,tmp);
   strncpy(tmp, alph, i);
   tmp[i] = '\0';
   strcat(cph,tmp); 
   return 0;
}
