#include <stdio.h>
#include<stdlib.h>
#include<string.h>

struct Vendedor {
    float salarioFixo;
    float vendas;
    float comissao;
    float salarioFinal;
};

void Registrar(struct Vendedor *vendedor) {

    printf("Digite o salario fixo: ");
    scanf("%f", &vendedor->salarioFixo);
    printf("Digite o valor total de vendas: ");
    scanf("%f", &vendedor->vendas);
    
    vendedor->comissao = 0.06 * vendedor->vendas;
    vendedor->salarioFinal = vendedor->salarioFixo + vendedor->comissao;
}

int main() {
    int numFunc;

    printf("Digite o numero de funcionarios: ");
    scanf("%d", &numFunc);

    struct Vendedor vendedores[numFunc];

    for (int i = 0; i < numFunc; i++) {
        printf("\nFuncionario %d:\n", i + 1);
        Registrar(&vendedores[i]);
    }

    for (int i = 0; i < numFunc; i++) {
        printf("\nFuncionario %d\n", i + 1);
        printf("Salario Fixo: R$ %.2f\n", vendedores[i].salarioFixo);
        printf("Vendas: R$ %.2f\n", vendedores[i].vendas);
        printf("Comissao: R$ %.2f\n", vendedores[i].comissao);
        printf("Salario Final: R$ %.2f\n", vendedores[i].salarioFinal);
    }

    return 0;
}





