//EXC 1
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    int vetor[9];

    for(int i = 0; i < 9; i++){
        printf("Informe um valor: ");
        scanf("%d", &vetor[i]);

        if(vetor[i] %2 == 0){
            printf("O numero %d eh par e esta localizado no vetor de posicao [%d]\n", vetor[i], i);
        }
    }
}