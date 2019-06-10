#include <stdio.h>
#include <string.h>
#include "encryptfunc.h"
int arrShift[256];
char cph[27] = "";
char gblKey[256];

int main(int argc, char* argv[]) {
char plainTxt[256];
char chr[1];
int chrpos;
char alph[27] = "abcdefghijklmnopqrstuvwxyz";
char cphchr[1];
char cphTxt[256];
int z = -1;

if (argc == 3)
  {
    sscanf(argv[1], "%s", gblKey);
    sscanf(argv[2], "%s", plainTxt);
  }
  else 
  {
    printf("Enter the key\n");
    scanf("%s", gblKey);
    printf("Enter the word\n");
    scanf("%s", plainTxt);
  }
    

//strcpy(gblKey, "dog");
//strcpy(plainTxt, "cartoon");
VertShiftAlg();

for (int i = 0; i<strlen(plainTxt); i++)
    {
      chr[0] = plainTxt[i];
      for (int t = 0 ; t < 27; t++)
        {
          if(alph[t] == chr[0])
          {
            chrpos = t + 1;
          }
        }

      if(z < strlen(gblKey) - 1)
      {
        z = z + 1;
      }  
      else {
        z = 0;
      }
      AlphaShift(arrShift[z]);  
      cphchr[0] = cph[chrpos]-1;
     append(cphTxt, cphchr[0]);
      strcpy(cph, "");

    }
  printf("cph = %s\n",cphTxt);
}
