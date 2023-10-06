#include <stdio.h>
#include <string.h>
#include<stdlib.h>

struct Produto {
    int codigo;
    char desc[100];
    float precoCompra;
    float precoVenda;
    int qtdEstoque;
    int estoqueMin;
};

void cadProduto(struct Produto produtos[], int *numProdutos) {
    if (*numProdutos < 40) {

        struct Produto novoProduto;

        printf("Digite o codigo do produto: ");
        scanf("%d", &novoProduto.codigo);
        printf("Digite a descricao do produto: ");
        scanf("%[^\n]", novoProduto.desc);
        printf("Digite o preco de compra do produto: ");
        scanf("%f", &novoProduto.precoCompra);
        printf("Digite o preco de venda do produto: ");
        scanf("%f", &novoProduto.precoVenda);
        printf("Digite a quantidade em estoque do produto: ");
        scanf("%d", &novoProduto.qtdEstoque);
        printf("Digite o estoque minimo permitido: ");
        scanf("%d", &novoProduto.estoqueMin);
    }
}

void calculaLucro(struct Produto produtos[], int numProdutos, int codigo) {
    int indice = -1;
    for (int i = 0; i < numProdutos; i++) {
        if (produtos[i].codigo == codigo) {
            indice = i;
            break;
        }
    }

    if (indice != -1) {
        float lucro = (produtos[indice].precoVenda - produtos[indice].precoCompra) * produtos[indice].qtdEstoque;
        float percentualLucro = (lucro / (produtos[indice].precoCompra * produtos[indice].qtdEstoque)) * 100;

        printf("Lucro com a venda do produto %d (%s): R$ %.2f\n", produtos[indice].codigo, produtos[indice].desc, lucro);
        printf("Percentual de lucro: %.2f%%\n", percentualLucro);
    } else {
        printf("Produto com o codigo nao encontrado.\n");
    }
}

void prod_qtd_abaixo(struct Produto produtos[], int numProdutos) {
    printf("Produtos com quantidade em estoque abaixo do estoque minimo:\n");
    for (int i = 0; i < numProdutos; i++) {
        if (produtos[i].qtdEstoque < produtos[i].estoqueMin) {
            printf("Codigo: %d, Descricao: %s, Quantidade em Estoque: %d, Estoque Minimo: %d\n",
                produtos[i].codigo, produtos[i].desc, produtos[i].qtdEstoque, produtos[i].estoqueMin);
        }
    }
}

int main() {

    struct Produto produtos[40];
    int numProdutos = 0;

    int escolha;

    do {
        printf("1. Cadastrar produto\n");
        printf("2. Calcular lucro de um produto\n");
        printf("3. Mostrar produtos abaixo do estoque minimo\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &escolha);

        switch (escolha) {
            case 1:
                cadProduto(produtos, &numProdutos);
                break;
            case 2:
                int codigo;
                printf("Digite o codigo do produto: ");
                scanf("%d", &codigo);
                calculaLucro(produtos, numProdutos, codigo);
                break;
            case 3:
                prod_qtd_abaixo(produtos, numProdutos);
                break;
            default:
                printf("Opcao invalida.\n");
                break;
        }
    } while (escolha != 4);

    return 0;
}
