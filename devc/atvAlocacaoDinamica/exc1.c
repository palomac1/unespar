#include <stdio.h>
#include <stdlib.h>

int main() {
    int tamanho;
    
    printf("Digite o tamanho dos arrays: ");
    scanf("%d", &tamanho);

    int *array1 = (int *)malloc(tamanho * sizeof(int));
    int *array2 = (int *)malloc(tamanho * sizeof(int));

 
    printf("Digite os valores para o primeiro array:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &array1[i]);
    }

    printf("Digite os valores para o segundo array:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &array2[i]);
    }

    // Alocar memória dinâmica para o terceiro array (soma)
    int *arraySoma = (int *)malloc(tamanho * sizeof(int));

    // Calcular a soma e armazenar no terceiro array
    for (int i = 0; i < tamanho; i++) {
        arraySoma[i] = array1[i] + array2[i];
    }

    printf("Resultado da soma dos arrays:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", arraySoma[i]);
    }

    free(array1);
    free(array2);
    free(arraySoma);

    return 0;
}
