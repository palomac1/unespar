//ARRUMAR
#include <stdio.h>

void preencherArray(int *array, int qtd, int valor) {
    int *p = array; 
    while (p < array + qtd) {
        *p = valor;
        p++;  
    }
}

int main() {
    int qtd = 5;
    int A[qtd];
    int valorPreencher = 10;

    preencherArray(A, qtd, valorPreencher);

    printf("Array preenchido: ");
    for (int i = 0; i < qtd; i++) {
        printf("%d ", A[i]);
    }

    return 0;
}
