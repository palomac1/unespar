//ARRUMAR
#include <stdio.h>
#include <stdlib.h>

int somarArrays(int *A,int *B, int *C, int tamanho) {
    if (tamanho <= 0) {
        printf("Tamanho inválido.\n");
        return 0; 
    }

    for (int i = 0; i < tamanho; i++) {
        C[i] = A[i] + B[i];
    }
    return 1; 
}

int main() {
    int tamanho;

    printf("Digite o tamanho dos arrays: ");
    scanf("%d", &tamanho);

    int A[tamanho];
    int B[tamanho];
    int C[tamanho];

    printf("Digite os elementos do primeiro array:\n");
    for (int i = 0; i < tamanho; i++) {
        scanf("%d", &A[i]);
    }

    printf("Digite os elementos do segundo array:\n");
    for (int i = 0; i < tamanho; i++) {
        scanf("%d", &B[i]);
    }

    if (somarArrays(A, B, C, tamanho)) {
        printf("Soma dos arrays:\n");
        for (int i = 0; i < tamanho; i++) {
            printf("%d ", C[i]);
        }
    } else {
        printf("A soma não pode ser realizada devido a tamanhos diferentes dos arrays.\n");
    }

    return 0;
}
