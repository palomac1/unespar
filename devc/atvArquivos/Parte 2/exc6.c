#include <stdio.h>

int main() {
    FILE *arquivo;
    char nomeArquivo[100];
    int filial;
    double valor;
    double totalVendas[4] = {0.0};
    int numVendas[4] = {0};

    printf("Informe o nome do arquivo de vendas: ");
    scanf("%s", nomeArquivo);

    arquivo = fopen(nomeArquivo, "r");

    if (arquivo == NULL) {
        printf("Não foi possível abrir o arquivo.\n");
        return 1;
    }

    while (fscanf(arquivo, "%d,%lf", &filial, &valor) == 2) {
        if (filial >= 1 && filial <= 4) {
            totalVendas[filial - 1] += valor;
            numVendas[filial - 1]++;
        }
    }

    fclose(arquivo);

    printf("Total e valor médio das vendas por filial:\n");

    for (int i = 0; i < 4; i++) {
        if (numVendas[i] > 0) {
            double media = totalVendas[i] / numVendas[i];
            printf("Filial %d: Total: R$ %.2lf, Média: R$ %.2lf\n", i + 1, totalVendas[i], media);
        } else {
            printf("Filial %d: Nenhuma venda registrada.\n", i + 1);
        }
    }

    return 0;
}
