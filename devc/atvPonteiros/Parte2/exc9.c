#include <stdio.h>

void maiorElemento(int array[], int N) {
    int maiorValor = array[0];  // Inicializa com o primeiro elemento
    int freq = 1;  // Inicializa a frequência como 1 para contar o primeiro elemento

    for (int i = 1; i < N; i++) {
        if (array[i] > maiorValor) {
            maiorValor = array[i];
            freq = 1;  // Reinicia a frequência se encontrar um elemento maior
        } else 
        if(array[i] == maiorValor) {
            freq++;  // Incrementa a frequência se encontrar um elemento igual ao maior
        }
    }

    printf("\nMaior elemento: %d\n", maiorValor);
    printf("Frequencia do maior elemento: %d\n", freq);
}

int main() {
    int N;

    printf("Digite o tamanho da array: ");
    scanf("%d", &N);

    int A[N];  

    printf("Digite os elementos da array:\n");
    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }

    maiorElemento(A, N);

    return 0;
}
