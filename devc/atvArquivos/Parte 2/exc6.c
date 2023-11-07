#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *arq;
    char nomeArq[30];
    int filial;
    double valor;
    double totalVendas[4] = {0.0};
    int numVendas[4] = {0};

    printf("Informe o nome do arquivo: ");
    gets(nomeArq);

    arq = fopen(nomeArq, "r");

    if (arq == NULL) {
        printf("Nao foi possível abrir o arquivo.\n");
        return 1;
    }

    while (fscanf(arq, "%d,%lf", &filial, &valor) == 2) {
        if (filial >= 1 && filial <= 4) { //-1 pois de 0 a 4 tem 5 e temos que voltar 1 casa no indice
            totalVendas[filial - 1] += valor; //Acumula o valor das vendas para cada filial separadamente à medida que o programa lê o arq.
            numVendas[filial - 1]++;
        }
    }

    fclose(arq);

    printf("\nTotal e valor medio das vendas por filial:\n");

    for (int i = 0; i < 4; i++) {
        if (numVendas[i] > 0) {
            double media = totalVendas[i] / numVendas[i];
            printf("Filial %d \n",  i + 1);
            printf("Total: R$ %.2lf\n",  totalVendas[i]);
            printf("Media: R$ %.2lf\n", media);
        } else {
            printf("Filial %d: Nenhuma venda registrada.\n", i + 1);
        }
    }

    return 0;
}
