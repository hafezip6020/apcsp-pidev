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


int main(int argc, char* argv[]) {
char plainTxt[256];
char chr[1];
int shift;
int chrpos;
char alph[27] = "abcdefghijklmnopqrstuvwxyz";
char cphchr[1];
char cphTxt[256];
int z = -1;

if (argc == 3)
  {
    sscanf(argv[1], "%s", &gblKey);
    sscanf(argv[2], "%s", &plainTxt);
  }
  else 
  {
    printf("Enter the key\n");
    scanf("%s", &gblKey);
    printf("Enter the word\n");
    scanf("%s", &plainTxt);
  }
    

//strcpy(gblKey, "dog");
//strcpy(plainTxt, "cartoon");
VertShiftAlg();

for (int i = 0; i<strlen(plainTxt); i++)
    {
      chr[0] = plainTxt[i];
    // printf("chr = %c\n", chr[0]);
    //  printf("chr = %c\n", plainTxt[i]);

      for (int t = 0 ; t < 27; t++)
        {
          if(alph[t] == chr[0])
          {
            chrpos = t + 1;
           // printf("chrpos = %d\n", chrpos);
          }
        }

      if(z < strlen(gblKey) - 1)
      {
        z = z + 1;
      }  
      else {
        z = 0;
      }
      //printf("z = %d",z);
      AlphaShift(arrShift[z]); 
      //printf("arrshift = %d\n", arrShift[z]);
     // printf("Final copied string : %s\n", cph); 
      cphchr[0] = cph[chrpos]-1;
    // printf("cphchr = %c\n", cphchr[0]);
     append(cphTxt, cphchr[0]);
      strcpy(cph, "");

    }
  printf("cph = %s\n",cphTxt);
}
