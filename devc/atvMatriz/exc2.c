//EXC 2
#include <stdio.h>
#include <math.h>
#include<stdio.h>
int main(){
    int A[2][2];
    int maior=0;

    printf("Digite uma matriz 2x2:\n"); 
    for (int i=0;i<2;i++){ 
        for (int j=0;j<2;j++){
            scanf("%d",&A[i][j]);
            if (A[i][j] > maior) maior = A[i][j]; 
        }      
    }
    for (int i=0;i<2;i++){ 
        for (int j=0;j<2;j++){
            A[i][j] *= maior;
        }    
    }
    
    printf("Maior número da matriz: %d\n",maior);
    printf("Nova matriz B:\n");

    for (int i=0;i<2;i++){ 
        for (int j=0;j<2;j++){
            printf("%d ",A[i][j]);
        }    
        printf("\n");  
    }
}
