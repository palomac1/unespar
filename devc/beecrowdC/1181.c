#include <stdio.h>

int main(void){
   const matOrdm = 12;
   float m[matOrdm][matOrdm], soma = 0, med;
   int linha, i, j;
   char op;

   scanf("%d %c ", &linha, &op);
   for (i = 0; i < matOrdm; i++){
      for (j = 0; j < matOrdm; j++){
         scanf("%f", &m[i][j]);
      }
   }

   for (i = 0; i < matOrdm; i++){
      soma += m[linha][i];
   }
   med = soma/matOrdm;

   switch (op){
   case 'S':
      printf("%.1f\n", soma);
      break;
   default:
      printf("%.1f\n", med);
      break;
   }
   return 0;
}