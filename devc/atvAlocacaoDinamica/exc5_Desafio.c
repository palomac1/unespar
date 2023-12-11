/*5 (desafio).
Crie um programa em C que permita ao usuário inserir sequencialmente números inteiros. 
O programa deve alocar dinamicamente memória para armazenar esses números em um array. 
Após cada inserção, o programa deve exibir a soma dos números até aquele ponto. 
O programa deve continuar a pedir números até que o usuário insira 0, indicando o fim da entrada. 
Finalmente, exiba a soma total dos números inseridos e libere a memória alocada.*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int *numeros = NULL; 
    int array = 0;        
    int x;           
    int soma = 0;        

    do {
        // Realloc para aumentar o tamanho do array dinamicamente
        numeros = (int *) realloc(numeros, (array + 1) * sizeof(int));

        if (numeros == NULL) {
            printf("Erro ao alocar memória\n");
            return 1;
        }

        printf("Digite um numero (digite 0 para encerrar): ");
        scanf("%d", &x);

        numeros[array] = x;
        array++;
        soma += x;
        
        printf("Soma ate esse ponto: %d\n", soma);

    } while (x != 0);

    printf("Soma total: %d\n", soma);

    free(numeros);

    return 0;
}
