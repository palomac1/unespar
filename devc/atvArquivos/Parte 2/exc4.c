#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char nomeArqEntrada[100], nomeArqSaida[100];
    char cidMaisPopulosa[41];  // 40 caracteres + 1 para o nulo
    int habMaisPopulosos = 0;

    printf("Digite o nome do arquivo de entrada: ");
    gets(nomeArqEntrada);

    FILE *arqEntrada = fopen(nomeArqEntrada, "r");
    if (arqEntrada == NULL) {
        printf("Erro ao abrir o arquivo de entrada.\n");
        return 1;
    }

    printf("Digite o nome do arquivo de saida: ");
    scanf("%s", nomeArqSaida);

    FILE *arqSaida = fopen(nomeArqSaida, "w");
    if (arqSaida == NULL) {
        printf("Erro ao criar o arquivo de saida.\n");
        fclose(arqEntrada);
        return 1;
    }

    // Lê o arquivo de entrada linha a linha
    char cidade[41];
    int habitantes;

    while (fscanf(arqEntrada, "%40s %d", cidade, &habitantes) != EOF) {
        if (habitantes > habMaisPopulosos) {
            habMaisPopulosos = habitantes;
            strcpy(cidMaisPopulosa, cidade);
        }
    }

    // Escreve a cidade mais populosa no arquivo de saída
    fprintf(arqSaida, "%s %d\n", cidMaisPopulosa, habMaisPopulosos);

    fclose(arqEntrada);
    fclose(arqSaida);

    return 0;
}
