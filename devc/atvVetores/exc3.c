//ARRUMAR
#include <stdio.h>
#include <stdlib.h>
#define NUM_JOGADAS 20
int main(int argc, char*argv[]) {  
      int i, Num = 0, Freq[7];  

        for (i = 0; i < 7; i++)   
           Freq[i] = 0;   
        for (i = 0; i < NUM_JOGADAS; i++) {      
            printf("\nDado jogado: ");      
            scanf("%i", &Num);       
                    
         while (Num < 1 || Num > 6) {         
            printf("\nDigite um valor entre 1 e 6: ");     
             scanf("%i", &Num);     
         }       
                              
         Freq[Num]++;   
        }    

        for (i = 0; i < 7; i++)    
            if (Freq[i] != 0) 
            printf("\nNumero %i sorteado, frenquencia %i vezes", i, Freq[i]);  
}
 