#include <stdio.h>
#include <math.h>
#include<stdio.h>
int main() {
    int i,j; 
    float A[2][2], maior;
     int matresult[][];
    
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
     
    for (int i = 0; i < A; i++) {
        for (int j = 0; j < A[i]; j++) {
            matresult[i][j] = A[i][j] * maior;
        }
    }
    
    printf("O valor da matriz resultante é: %.0f\n ", matresult[i][j]);
}
