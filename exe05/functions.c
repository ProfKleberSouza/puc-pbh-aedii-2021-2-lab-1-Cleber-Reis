
#include "functions.h"



      void inverte(char texto[])
      {
          char string[60];
          char stringAux[60];
          int i, j, n;

          n = strlen(string);
          j = n - 1;

          for(i = 0; i < n; i++)
          {
              stringAux[i] = string[j];
              j = j - 1;
          }
          stringAux[i] = '\0';

          printf("\n");
          printf("Entrada: %s\n", string);
          printf("Saida: %s\n", stringAux);
      }
