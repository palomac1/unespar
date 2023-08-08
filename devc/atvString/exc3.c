//EXC 1
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){

   int Vogais(char palavra[]) {
     char vogais[] = "aeiouAEIOU"; 
     int numVogais = 0, i, j; 
     
      for (i = 0; palavra[i] != '\0'; i++) { 
        for (j = 0; vogais[j] != '\0'; j++) { 
            if (vogais[j] == palavra[i]) { 
                numVogais++; break; 
            }
        } 
      } 
        return numVogais; 
    }
}
