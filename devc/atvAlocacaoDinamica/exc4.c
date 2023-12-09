#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int linha, coluna;
    int **matriz;

    printf("Insira o numero de linhas da matriz: ");
    scanf("%d", &linha);

    printf("Insira o numero de colunas da matriz: ");
    scanf("%d", &coluna);

    matriz = (int**) malloc(linha * sizeof(int*));

    for (int i = 0; i < linha; i++) {
        matriz[i] = (int*) malloc(coluna * sizeof(int));
    }

    for (int i = 0; i < linha; i++) {
        for (int j = 0; j < coluna; j++) {
            printf("Insira os elemento da matriz: ");
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("Matriz inserida:\n");
    for (int i = 0; i < linha; i++) {
        for (int j = 0; j < coluna; j++) {
            printf("%4d", matriz[i][j]);
        }
        printf("\n");
    }

    // Libera a memória 
    for (int i = 0; i < linha; i++) {
        free(matriz[i]);
    }
    free(matriz);

    return 0;
}


// int **matriz significa que matriz é um ponteiro para um ponteiro para um inteiro. 
// Isso é necessário porque é uma matriz bidimensional. Para representar uma matriz bidimensional usando alocação dinâmica,
// você precisa de um ponteiro para ponteiro (ou ponteiro duplo). Isso ocorre porque uma matriz bidimensional é essencialmente
//  um array de arrays. Então, int **matriz é um ponteiro para ponteiro de inteiro