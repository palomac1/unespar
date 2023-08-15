#include <stdio.h>
#include <math.h>
#include<stdio.h>
int main() {
    int i,j; 
    float A[2][2], maior;
     int B[0][0];
    
     printf("Digite uma matriz 2x2:\n"); 
     for (i=0; i<2; i++){ 	
         for (j=0; j<2; j++) 	 
         scanf("%f", &A[i][j]); 	 
     }		 
     
     maior=A[0][0]; 	 
     for(i=0;i<=2;i++){ 	 
         for(j=0;j<=2;j++){ 	 
             if(maior<A[i][j]){ 	 
                 maior=A[i][j]; 
                 
             } 
         } 
     }
     printf("\nO maior elemento da matriz eh: %.0f\n", maior);	
     
     
    for (i = 0; i < A[i][j]; i++) {
        for (j = 0; j < A[i][j]; j++) {
            B[i][j] = A[i][j] * maior;
            printf("O valor da matriz resultante é: %.0f\n ", B[i][j]);
        }
    }
}
