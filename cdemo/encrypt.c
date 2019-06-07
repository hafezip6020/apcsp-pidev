#include <stdio.h>
#include <string.h>
int arrShift[256];
char cph[27] = "";
char gblKey[256];


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


int main(void) {
char plainTxt[256];
char chr[1];
int shift;
int chrpos;
char alph[27] = "abcdefghijklmnopqrstuvwxyz";
char cphchr[1];
char cphTxt[256];
int z = -1;

strcpy(gblKey, "dog");
strcpy(plainTxt, "batea");
//VertShiftAlg();

for (int i = 0; i<strlen(plainTxt); i++)
    {
      chr[0] = plainTxt[i];
      printf("chr = %c\n", chr[0]);
      printf("chr = %c\n", plainTxt[i]);

      for (int t = 0 ; t < 27; t++)
        {
          if(alph[t] == chr[0])
          {
            chrpos = t + 1;
            printf("chrpos = %d\n", chrpos);
          }
        }

      if(z < strlen(gblKey) - 1)
      {
        z = z + 1;
      }  
      else {
        z = 0;
      }
      printf("z = %d",z);
      AlphaShift(arrShift[z]); 
      printf("arrshift = %d\n", arrShift[z]);
      printf("Final copied string : %s\n", cph); 
      cphchr[0] = cph[chrpos];
      printf("cphchr = %c\n", cphchr[0]);
      strcat(cphTxt, cphTxt);

    }
  printf("cph = %s\n",cphTxt);
}
