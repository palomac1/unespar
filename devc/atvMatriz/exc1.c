//EXC 1
#include <stdio.h>
#include <math.h>
#include<stdio.h>
int main() {
    int i,j; 
    float x[3][3], maior;
    
     printf("Digite uma matriz 3x3:\n"); 
     for (i=0; i<3; i++){ 	
         for (j=0; j<3; j++) 	 
         scanf("%f", &x[i][j]); 	 
     }		 

     printf("Matriz Lida: \n"); 	 
     for(i=0; i<3; i++) {	 
         for(j=0; j<3; j++) 	
         printf(" %.0f", x[i][j]); 	 
         printf("\n"); 	 
     } 	
     
     maior=x[0][0]; 	 
     for(i=0;i<=2;i++){ 	 
         for(j=0;j<=2;j++){ 	 
             if(maior<x[i][j]){ 	 
                 maior=x[i][j]; 
                 
             } 
         } 
     }
     printf("\nO maior elemento da matriz eh: %.0f\n", maior);		
    
}