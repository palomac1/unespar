//EXC 4
#include <stdio.h>
#include <math.h>
#include<stdlib.h>
int main(){
    int vet[18];
    int A[3][6];
    int cont = 0;

    for (int m = 0; m < 18; m++){ 
        printf("Digite um numero: ");
         scanf("%d",&vet[m]);
    }

    for (int i = 0; i < 3 ; i++){
        for (int j = 0 ; j < 6; j++){
           A[i][j] = vet[cont];
           cont++;
        }
    }
    printf("\nNova matriz:\n");
    for (int i = 0; i < 3; i++){ 
        for (int j = 0; j < 6; j++){
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }
}